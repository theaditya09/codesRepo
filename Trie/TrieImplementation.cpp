#include <bits/stdc++.h>
using namespace std; 

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char data)
        {
            this -> data = data;
            isTerminal = false;
            for(int i=0; i<26; i++)
            {
                children[i] = NULL;
            }
        }
};

class Trie{
    private:
        TrieNode* root;

        void insertUtil(TrieNode* root, string str)
        {
            if(str.length() == 0)
            {
                root -> isTerminal = true;
                return;
            }

            int index = str[0] - 'A';
            
            TrieNode* child;

            if(root->children[index] != NULL)
            {
                child = root->children[index];
            }
            else{
                child = new TrieNode(str[0]);
                root -> children[index] = child;
            }

            insertUtil(child,str.substr(1));

        }

        bool searchUtil(TrieNode* root, string str)
        {
            if(str.length() == 0)
            {
                return root->isTerminal;
            }

            int index = str[0] - 'A';
            if(root->children[index] != NULL)
            {
                return searchUtil(root->children[index], str.substr(1));
            }
            else{
                return false;
            }
        }

    public:
        Trie()
        {
            root = new TrieNode('\0');
            cout<<"successfully crreated"<<endl;
        }

        void insertWord(string str)
        {
            insertUtil(root,str);
        }

        bool searchWord(string str)
        {
            return searchUtil(root,str);
        }

        void printAll(TrieNode* curr, string &ans)
        {
            ans.push_back(curr -> data);
            
            for(int i=0; i<26; i++)
            {
                if(curr -> children[i] != NULL)
                {
                    printAll(curr -> children[i], ans);
                }
            }
            if(curr -> isTerminal) cout<<ans<<endl;
            ans.pop_back();
        }

        TrieNode* getRoot()
        {
            return root;
        }


};


int main() {

    Trie *tr = new Trie();
    tr -> insertWord("ARM");
    tr -> insertWord("ARMED");
    tr -> insertWord("ARMOUR");
    tr -> insertWord("TIMER");
    tr -> insertWord("HELLO");

    //cout<<"Present or not : "<<tr->searchWord("HELLO");
    string ans = "";
    TrieNode* root = tr -> getRoot();
    tr->printAll(root -> children[0],ans);
    return 0;
}