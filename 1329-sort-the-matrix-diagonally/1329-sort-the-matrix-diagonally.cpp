class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        int x=0,y=0,z=0;
        for(int i=0;i<n;i++)
        {
            x=i;
            y=0;
            vector<int> v;
            while(x<n && y<m)
            {
                v.push_back(mat[x][y]);
                x++;
                y++;
            }
            sort(v.begin(),v.end());
            x=i;
            y=0;
            z=0;
            while(x<n && y<m)
            {
                mat[x][y]=v[z];
                z++;
                x++;
                y++;
            }
        }
        for(int i=0;i<m;i++)
        {
            x=0;
            y=i;
            vector<int> v;
            while(x<n && y<m)
            {
                v.push_back(mat[x][y]);
                x++;
                y++;
            }
            sort(v.begin(),v.end());
            x=0;
            y=i;
            z=0;
            while(x<n && y<m)
            {
                mat[x][y]=v[z];
                z++;
                x++;
                y++;
            }
        }
        return mat;
    }
};