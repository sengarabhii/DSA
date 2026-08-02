#include<iostream>
using namespace std;
class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;
        TrieNode(char ch){
            data = ch;
            for(int i = 0 ; i < 26 ; i++){
                children[i] = NULL;
            }  
            isTerminal = false;   
        }
};
class Trie{
    public:
        TrieNode* root;
        Trie(){
            root = new TrieNode('\0');
        }
        void insertUtil(TrieNode* root,string word){
            //base case;
            if(word.length()==0){
                //terminal
                root->isTerminal = true;
                return;
            }
            int ind = word[0]-'a';
            TrieNode* child;
            //checking present or not
            if(root->children[ind]==NULL){//absent
                child = new TrieNode(word[0]);
                root->children[ind] = child;
            }
            else{//present
                child = root->children[ind];
            }
            //recursion
            insertUtil(child,word.substr(1));
            
        }
        void insertword(string word){
            insertUtil(root,word);
        }
        bool searchUtil(TrieNode* root,string word){
            //base case
            if(word.length()==0){
                return root->isTerminal;
            }
            int ind = word[0]-'a';
            if(root->children[ind]!=NULL){
                //present
                return searchUtil(root->children[ind],word.substr(1));
            }
            else{
                //not present
                return false;
            }
        }
        bool search(string word){
            return searchUtil(root,word);
        }
        void removeUtil(TrieNode* root,string word){
            if(word.length()==0){
                root->isTerminal = false;
                return;
            }
            int ind = word[0] - 'a';
            if(root->children[ind]!=NULL){
                removeUtil(root->children[ind],word.substr(1));
            }
            else{
                return;
            }
        }
        void remove(string word){
            removeUtil(root,word);
        }
};
int main(){
    cout << "hello" <<endl;
    Trie *t = new Trie();
    t->insertword("abcd");
    t->insertword("abcdef");
    t->insertword("timer");
    cout << t->search("abcd") <<endl;
    cout << t->search("time") <<endl;
    cout << t->search("timer") <<endl;
    t->remove("abcd");
    cout << t->search("abcd") <<endl;
    cout << t->search("abcdef");

}