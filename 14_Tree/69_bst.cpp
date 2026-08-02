#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    //constructor
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node* insertion(node* root,int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }
    if(data<root->data){
        root->left = insertion(root->left,data);
    }
    else{
        root->right = insertion(root->right,data);
    }
    return root;
}
node* deletionfromBST(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    // 0 child
    if(root->data==key){
        //found
        //0 child
        if(root->left==NULL && root->right!=NULL){
            delete root;
            return NULL;
        }

        // 1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left==NULL && root->right!=NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL && root->right!=NULL){
            //we have two option either replace root->val with  max from left subtree or min from right subtree and delete the min/max u have taken from tree
            //im replacing with min from right subtree
            node* temp = root->right;
            while(temp->left){
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deletionfromBST(root->right,root->data);
            return root;
        }
    }
    else if(root->data>key){
        root->left = deletionfromBST(root->left,key);
    }
    else{
        root->right = deletionfromBST(root->right,key);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    node* root = NULL;
    int data;
    cin >> data;
    while(data!=-1){
        root = insertion(root,data);
        cin >> data;
    }
    inorder(root);
}