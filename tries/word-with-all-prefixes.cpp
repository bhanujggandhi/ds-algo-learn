#include <bits/stdc++.h>

using namespace std;

/* Complete string is the one which has all the prefixes in the dictionary */

struct Node {
    Node* arr[26];
    bool flag = false;
};

class Trie {
   private:
    Node* root;

   public:
    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* node = root;

        for (char x : word) {
            if (node->arr[x - 'a'] == NULL) {
                node->arr[x - 'a'] = new Node();
            }
            node = node->arr[x - 'a'];
        }

        node->flag = true;
    }

    bool checkPrefix(string word) {
        Node* node = root;
        for (auto x : word) {
            if (node->arr[x - 'a'] != NULL) {
                node = node->arr[x - 'a'];
                if (node->flag == false)
                    return false;
            } else
                return false;
        }
        return true;
    }
};

string completeString(vector<string>& a) {
    Trie t;

    for (auto it : a) {
        t.insert(it);
    }

    string longest = "";
    for (auto it : a) {
        if (t.checkPrefix(it)) {
            if (it.size() > longest.size()) {
                longest = it;
            } else if (it.size() == longest.size() and it < longest) {
                longest = it;
            }
        }
    }

    if (longest == "")
        return "None";
    return longest;
}

int main() {
    vector<string> arr = {"ab", "abc", "a", "bp"};

    cout << completeString(arr) << "\n";

    return 0;
}