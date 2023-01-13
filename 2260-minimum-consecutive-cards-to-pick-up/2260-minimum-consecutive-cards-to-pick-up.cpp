class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>> mp;
        for(int i=0;i<cards.size();i++)
        {
            mp[cards[i]].push_back(i);
        }
        int ans=INT_MAX;
        bool flag=0;
        for(auto it:mp)
        {
            vector<int> k;
            k=it.second;
            if(k.size()>1)
            {
                flag=1;
                for(int i=0;i<k.size()-1;i++)
                {
                    ans=min(ans,k[i+1]-k[i]+1);
                }
            }
        }
        if(flag==1)
        {
            return ans;
        }
        return -1;
    }
};