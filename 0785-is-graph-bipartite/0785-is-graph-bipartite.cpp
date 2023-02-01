class Solution {
public:
    bool isBipartite(vector<vector<int>>& g) {
    int n = g.size();
    vector<int> c(n,-1);    
    queue<int> q; 
    for (int i = 0; i < n; i++) {
            if (c[i]>=0) 
            {
                continue;
            }
            c[i] = 0;
            q.push(i);
            while (!q.empty()) 
            {
                int temp = q.front();
                q.pop();
                for (auto it : g[temp]) 
                {
                    if (c[it]==-1)
                    {
                        c[it] = !c[temp];
                        q.push(it);
                    }
                    else if (c[it] == c[temp]) 
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};