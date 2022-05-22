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
    int maxDepth(TreeNode* root) {
        // DFS
        //=========
        if(root == NULL) return 0;
        else{
            return max(maxDepth(root->left),maxDepth(root->right))+1;
        }

        //BFS
        //=========
        // if(root==NULL) return 0;
        // queue<TreeNode *> q;
        // q.push(root);
        // int level = 0;
        // while(!q.empty()){
        //     ++ level;
        //     for(int i = 0 ; i < q.size() ; ++i){
        //         TreeNode* temp = q.front();
        //         q.pop();
        //         if(temp->left!=NULL){
        //             q.push(temp->left);
        //         }
        //         if(temp->right!=NULL){
        //             q.push(temp->right);
        //         }
        //     }
        // }
        // return level;
    }
    
};