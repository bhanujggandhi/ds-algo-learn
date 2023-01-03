#include <bits/stdc++.h>

using namespace std;

struct Node {
    Node* chars[26] = {NULL};
    bool flag = false;
    int countwords = 0;
    int countpref = 0;
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
            node->countpref++;
        }

        node->flag = true;
        node->countwords++;
    }

    int countWordsEnd(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->chars[word[i] - 'a'] == NULL) {
                return 0;
            }
            node = node->chars[word[i] - 'a'];
        }

        return node->countwords;
    }

    int countWordsStartingWith(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->chars[word[i] - 'a'] == NULL) {
                return 0;
            }
            node = node->chars[word[i] - 'a'];
        }

        return node->countpref;
    }

    void erase(string word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->chars[word[i] - 'a'] != NULL) {
                node = node->chars[word[i] - 'a'];
                node->countpref--;
            } else {
                return;
            }
        }
        if (node->countwords > 0)
            node->countwords--;
    }
};

int main() {
    Trie t;
    t.insert("samsung");
    t.insert("samsung");
    t.insert("vivo");
    t.erase("vivo");

    cout << t.countWordsEnd("samsung") << "\n";
    cout << t.countWordsStartingWith("vi") << "\n";

    return 0;
}