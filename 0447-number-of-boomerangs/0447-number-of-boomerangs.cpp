class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int n=p.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            map<int,int> mp;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    int dist=pow(p[i][0]-p[j][0],2)+pow(p[i][1]-p[j][1],2);
                    mp[dist]++;
                }
            }
            for(auto it:mp)
            {
                cnt+=it.second*(it.second-1);
            }
        }
        return cnt;
    }
};