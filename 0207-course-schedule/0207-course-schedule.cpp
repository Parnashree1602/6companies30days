class Solution {
public:
    bool cycle(int i, vector<int> adj[],vector<int>& v)
    {
        if(v[i]==1)
        {
            return true;
        }
        if(v[i]==0)
        {
            v[i]=1;
            for(auto it:adj[i])
            {
                if(cycle(it,adj,v)==true)
                {
                    return true;
                }
            }
        }
        v[i]=-1;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int> adj[n];
        for(auto it:p)
        {
            adj[it[1]].push_back(it[0]);
        }
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            if(cycle(i,adj,v)==true)
            {
                return false;
            }
        }
        return true;
    }
};