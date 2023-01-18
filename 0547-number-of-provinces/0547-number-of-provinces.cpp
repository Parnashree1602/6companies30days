class Solution {
public:
    void dfs(vector<vector<int>>& v, vector<int>& vis, int i)
    {
        vis[i]=1;
        for(int j=0;j<v.size();j++)
        {
            if(vis[j]==0 && v[i][j]==1)
            {
                dfs(v,vis,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& v) {
        int n=v[0].size();
        int cnt=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
                if(vis[i]==0)
                {
                    cnt++;
                    dfs(v,vis,i);
                }
            
        }
        return cnt;
    }
};