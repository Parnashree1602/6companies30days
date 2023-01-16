class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> st;
        int ans=INT_MIN;
        for(auto it:nums)
        {
            if(st.find(it*(-1))==st.end())
            {
                st.insert(it);
            }
            else
            {
                ans=max(ans,abs(it));
            }
        }
        if(ans==INT_MIN)
        {
            return -1;
        }
        return ans;
    }
};