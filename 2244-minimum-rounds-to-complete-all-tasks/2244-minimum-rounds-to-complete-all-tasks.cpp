class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(auto it:tasks)
        {
            mp[it]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
            if(it.second<2)
            {
                return -1;
            }
            else if(it.second%3==0)
            {
                cnt+=(it.second/3);
            }
             else if(it.second%3!=0)
            {
                cnt+=(it.second/3)+1;
            }
        }
        return cnt;
    }
};