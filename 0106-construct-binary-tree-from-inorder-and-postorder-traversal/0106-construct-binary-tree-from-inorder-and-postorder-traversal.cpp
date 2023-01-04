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
    TreeNode* tree(vector<int>& in,int is,int ie,vector<int>& post,int ps,int pe,unordered_map<int,int>& mp)
{
    if(is>ie || ps>pe)
    {
        return NULL;
    }
    TreeNode* root=new TreeNode(post[pe]);
    int inroot=mp[post[pe]];
    int numsleft=inroot-is;
    root->left=tree(in, is, inroot-1, post, ps, ps+numsleft-1, mp);
    root->right=tree(in, inroot+1, ie, post, ps+numsleft, pe-1, mp);
    return root;
}
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        unordered_map<int,int> mp;
        for(int i=0;i<in.size();i++)
        {
            mp[in[i]]=i;
        }
        return tree(in, 0, in.size()-1,post, 0, post.size()-1, mp);
    }
};