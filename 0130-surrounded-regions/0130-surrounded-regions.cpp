class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& b,vector<vector<int>>& v)
    {
        v[r][c]=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        int n=b.size();
        int m=b[0].size();
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && b[nr][nc]=='O' && !v[nr][nc])
            {
                dfs(nr,nc,b,v);
            }
        }
    }
    
    void solve(vector<vector<char>>& b) {
        int n=b.size();
        int m=b[0].size();
        vector<vector<int>> v(n,vector<int> (m,0));
        for(int i=0;i<m;i++)
        {
            if(b[0][i]=='O' && !v[0][i])
            {
                dfs(0,i,b,v);
            }
            if(b[n-1][i]=='O' && !v[n-1][i])
            {
                dfs(n-1,i,b,v);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(b[i][0]=='O' && !v[i][0])
            {
                dfs(i,0,b,v);
            }
            if(b[i][m-1]=='O' && !v[i][m-1])
            {
                dfs(i,m-1,b,v);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!v[i][j] && b[i][j]=='O')
                {
                    b[i][j]='X';
                }
            }
        }
    }
};
// TC=O(n*m), SC=O(n*m)