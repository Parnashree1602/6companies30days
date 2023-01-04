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
    int cnt=0;
    pair<int,int> f(TreeNode* root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        pair<int,int> left=f(root->left);
        int ls=left.first;
        int lc=left.second;
        pair<int,int> right=f(root->right);
        int rs=right.first;
        int rc=right.second;
        int s=ls+rs+root->val;
        int c=lc+rc+1;
        if(s/c==root->val)
        {
            cnt++;
        }
        return {s,c};
        
    }
    int averageOfSubtree(TreeNode* root) {
        f(root);
        return cnt;
    }
};