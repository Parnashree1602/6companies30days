//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> vis(V,0);
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        //weight,node;
        pq.push({0,0});
        int sum=0;
        //E
        while(!pq.empty())
        {
            //log E
            int wt=pq.top().first;
            int n=pq.top().second;
            pq.pop();
            if(vis[n]==1)
            {
                continue;
            }
            vis[n]=1;
            sum+=wt;
            //E
            for(auto it:adj[n])
            {
                int node=it[0];
                int w=it[1];
                //log E
                if(!vis[node])
                {
                    pq.push({w,node});
                }
            }
        }
        return sum;
    }
};
//TC= O(ElogE)

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends