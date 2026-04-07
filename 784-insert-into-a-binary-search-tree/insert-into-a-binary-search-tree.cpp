/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
void solve(TreeNode* &root,int val,TreeNode* newnode){
        if(root==NULL){
            root = newnode;
            return;
        }
        if(val<root->val){
            if(root->left==NULL){
                root->left = newnode;
            }
            else{
                solve(root->left,val,newnode);
            }
        }
        else{
            if(root->right==NULL){
                root->right = newnode;
            }
            else{
                solve(root->right,val,newnode);
            }
        }
}
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newnode = new TreeNode(val);
        solve(root,val,newnode);
        return root;
    }
};