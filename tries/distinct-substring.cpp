#include <bits/stdc++.h>

using namespace std;

struct Node {
    Node* chars[26] = {NULL};
    bool flag = false;
};

class Trie {
   private:
    Node* root;

   public:
    Trie() {
        root = new Node();
    }

    int insert(string word) {
        int cnt = 0;
        for (int i = 0; i < word.size(); i++) {
            Node* node = root;
            for (int j = i; j < word.size(); j++) {
                if (node->chars[word[j] - 'a'] == NULL) {
                    node->chars[word[j] - 'a'] = new Node();
                    cnt++;
                }
                node = node->chars[word[j] - 'a'];
            }
            node->flag = true;
        }

        return cnt + 1;
    }
};

int main() {
    Trie t;
    cout << t.insert("abc") << "\n";

    return 0;
}