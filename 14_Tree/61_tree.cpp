#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* builtTree(node* root){
    int data;
    cout << "Enter data : ";
    cin >> data;
    root = new node(data);
    if(data==-1){
        return NULL; 
    }
    cout << "For left of " << data << " ";
    root->left =  builtTree(root->left); 
    cout << "For right of " << data << " ";
    root->right = builtTree(root->right); 
    return root;
}
//level order traversal
//breadth first search
void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout << endl;
            if(!q.empty()){//still some child left in queue
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}

void builtfromlevelorder(node* &root){
    cout << "Enter data for root : " ;
    int data;
    cin >> data;
    root = new node(data);
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter data for left of " << temp->data << " " ;
        cin >> data;
        if(data!=-1){
            temp->left = new node(data);
            q.push(temp->left);
        }

        cout << "Enter data for rigjt of " << temp->data << " " ;
        cin >> data;
        if(data!=-1){
            temp->right = new node(data);
            q.push(temp->right);
        }
    }
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    
    inorder(root->right);

}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    node* root;
    // root = builtTree(root);
    builtfromlevelorder(root);
    cout <<endl;
    cout << "level order traversal : " ;
    levelordertraversal(root);
    cout << endl;
    cout << "inorder :" ;
    inorder(root);
    cout <<endl;
    cout << "preorder : " ;
    preorder(root);
    cout <<endl;
    cout << "postorder : " ;
    postorder(root);
}