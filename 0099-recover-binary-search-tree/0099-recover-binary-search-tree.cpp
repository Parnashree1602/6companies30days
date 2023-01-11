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
    TreeNode* f;
    TreeNode* p;
    TreeNode* m;
    TreeNode* l;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        if(p!=NULL && root->val<p->val)
        {
            if(f==NULL)
            {
                f=p;
                m=root;
            }
            else
            {
                l=root;
            }
        }
        p=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        p=new TreeNode(INT_MIN);
        f=m=l=NULL;
        inorder(root);
        if(f && l)
        {
            swap(f->val,l->val);
        }
        else
        {
            swap(f->val,m->val);
        }
    }
};
//TC=O(n), SC=O(1)