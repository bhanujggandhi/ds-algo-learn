//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
   public:
    int search(int A[], int N) {
        int i = 0;
        int j = N - 2;

        while (i <= j) {
            int mid = (i + j) / 2;
            int firstoc = mid;

            if (mid > 0 and A[mid] == A[mid - 1])
                firstoc--;

            if (firstoc < N - 1 and A[firstoc] != A[firstoc + 1])
                return A[firstoc];

            if (firstoc % 2 == 0)
                i = firstoc + 1;
            else
                j = firstoc - 1;
        }

        return -1;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t, len;
    cin >> t;
    while (t--) {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(arr, len) << '\n';
    }
    return 0;
}

// } Driver Code Ends

/*
1
7
2 2 5 5 20 30 30

1
5
0 0 17 34 34
 */