class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& v, int r, int c, int color,int ini)
    {
        int n=v.size();
        int m=v[0].size();
        if(r>=0 && r<n && c>=0 && c<m && image[r][c]==ini && v[r][c]!=color)
        {
            v[r][c]=color;
        }
        else
        {
            return;
        }
        dfs(image,v,r+1,c,color,ini);
        dfs(image,v,r,c-1,color,ini);
        dfs(image,v,r-1,c,color,ini);
        dfs(image,v,r,c+1,color,ini);   
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> v= image;
        int initial=image[sr][sc];
        dfs(image,v,sr,sc,color,initial);
        return v;
    }
};
