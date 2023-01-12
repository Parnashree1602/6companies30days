class Solution {
public:
  vector<int> f(vector<vector<int>> &a, string &labels, int i,vector<int>&r){
    vector<int> ans(26, 0);
    r[i] = 1;
    ans[labels[i] - 'a'] = 1;   
    for(int j = 0; j < a[i].size(); j++)
    {
        if(!r[a[i][j]])
        {
          vector<int> tmp = f(a, labels,a[i][j],r);
          for(int k = 0; k < 26; k++) 
          {
              ans[k] += tmp[k];
          }
        }
    }
    
    r[i] = ans[labels[i] - 'a'];
    
    return ans;
  }
  
  vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
    vector<vector<int>> a(n);
    vector<int> r(n,0);
    for(int i = 0; i < edges.size(); i++)
     {
        a[edges[i][0]].push_back(edges[i][1]);
        a[edges[i][1]].push_back(edges[i][0]);
     }
    
    f(a, labels, 0,r);
    return r;
  }
};