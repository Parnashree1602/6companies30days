class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid)
    {
        if(row>=0 && row<grid.size() && col>=0 && col<grid[0].size() && vis[row][col]==0 && grid[row][col]=='1')
        {
            vis[row][col]=1;
           
        }
        else 
        {
            return;
        }
         dfs(row+1,col,vis,grid);
         dfs(row,col-1,vis,grid);
         dfs(row-1,col,vis,grid);
         dfs(row,col+1,vis,grid);
    }
        
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    cnt++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};