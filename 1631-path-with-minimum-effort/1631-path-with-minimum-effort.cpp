class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
    priority_queue <pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        int n=h.size();
        int m=h[0].size();
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0]=0;
        pq.push({0,{0,0}});
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!pq.empty())
        {
            int d=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            if(r==n-1 && c==m-1)
            {
                return d;
            }
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m)
                {
                    int eff=max(abs(h[nr][nc]-h[r][c]),d);
                    if(eff<dist[nr][nc])
                    {
                        dist[nr][nc]=eff;
                        pq.push({eff,{nr,nc}});
                    }
                }
                
            }
        }
        return 0;
    }
};