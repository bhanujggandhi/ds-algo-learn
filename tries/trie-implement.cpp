#include <bits/stdc++.h>

using namespace std;

struct Node {
    /*
        0->a
        1->b
        and so on..
    */
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

    void insert(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->chars[word[i] - 'a'] == NULL) {
                node->chars[word[i] - 'a'] = new Node();
            }
            node = node->chars[word[i] - 'a'];
        }

        node->flag = true;
    }

    bool search(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->chars[word[i] - 'a'] == NULL) {
                return false;
            }

            node = node->chars[word[i] - 'a'];
        }

        return node->flag;
    }

    bool startsWith(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->chars[word[i] - 'a'] == NULL) {
                return false;
            }

            node = node->chars[word[i] - 'a'];
        }

        return true;
    }
};

int main() {

    Trie t;
    t.insert("apple");
    t.insert("apps");
    t.insert("bac");
    t.insert("bat");

    cout << t.startsWith("apl") << "\n";

    return 0;
}