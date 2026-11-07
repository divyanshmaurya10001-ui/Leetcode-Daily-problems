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
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty()) return NULL;

        TreeNode* root = new TreeNode(preorder[0]);

        int mid = 0;
        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == preorder[0]){
                mid = i;
                break; 
            }
        }

        vector<int> leftinorder(inorder.begin(), inorder.begin() + mid);
        vector<int> rightinorder(inorder.begin() + mid + 1, inorder.end());
        vector<int> leftpreorder(preorder.begin() + 1, preorder.begin() + 1 + leftinorder.size());
        vector<int> rightpreorder(preorder.begin() + 1 + leftinorder.size(), preorder.end());
        root->left = buildTree(leftpreorder, leftinorder);
        root->right = buildTree(rightpreorder, rightinorder);
        
        return root;
    }
};