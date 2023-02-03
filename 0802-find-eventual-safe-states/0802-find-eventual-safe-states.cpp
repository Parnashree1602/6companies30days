class Solution {
public:
    bool dfs(int i,vector<vector<int>>& g,vector<int>& v,vector<int>& pv,vector<int>& c)
    {
        v[i]=1;
        pv[i]=1;
        for(auto it:g[i])
        {
            if(!v[it])
            {
                if(dfs(it,g,v,pv,c))
                {
                    c[i]=0;
                    return true;
                }
            }
            else if(v[it] && pv[it])
            {
                c[i]=0;
                return true;
            }
        }
        c[i]=1; // if this line reached, means no cycle has been dtected yet.
        pv[i]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        int n=g.size();
        vector<int> v(n,0);
        vector<int> pv(n,0);
        vector<int> c(n,0); 
// we have put a check so that all paths across a node is checked n if all paths are acyclic it will return true
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(!v[i])
            {
                dfs(i,g,v,pv,c);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(c[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// TC=O(v+2e), SC=O(n)