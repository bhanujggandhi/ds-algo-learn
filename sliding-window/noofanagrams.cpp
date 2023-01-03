#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int search(string pat, string txt) {
        int k = 0, i = 0, j = 0, count = 0, ans = 0;
        unordered_map<char, int> mp;

        //    In this problem window size is not given but we know for sure that
        //    anagram must be equal to the length of the pattern or we can say
        //    that pattern is the size of the window
        k = pat.size();

        // Now we are counting number of occurences of the each char in
        // the pattern
        for (auto ch : pat)
            mp[ch]++;

        // Keeping the count of all the distinct characters in the pattern
        count = mp.size();

        // Now comes the sliding window loop
        while (j < txt.size()) {

            // If we have the current character inside the map, decrease its count
            if (mp.find(txt[j]) != mp.end()) {
                mp[txt[j]]--;
            }

            // Check if the frequency becomes zero of current character we know we have utilised one
            // unique character completely. So we decrease the count.
            if (mp.find(txt[j]) != mp.end()) {
                if (mp[txt[j]] == 0)
                    count--;
            }

            // If we have not reached the window size, just increase j to increase
            // widow size to k
            if (j - i + 1 < k)
                j++;

            // When window size becomes equal to k
            else if (j - i + 1 == k) {
                // If count gets 0 that means we have utilised all the unique characters completely and this is
                // our anagram. So, increment the ans variable.
                if (count == 0)
                    ans++;

                // Now while sliding the window, we have to see if we have that character in the map and increment it.
                if (mp.find(txt[i]) != mp.end()) {
                    mp[txt[i]]++;
                }

                // While incrementing it can be possible that we have added a unique character
                // Check if this character is just added means it's count just turned to 1
                if (mp.find(txt[i]) != mp.end()) {
                    if (mp[txt[i]] == 1)
                        count++;
                }

                // Slide the window
                i++;
                j++;
            }
        }

        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}