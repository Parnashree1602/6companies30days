class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int ans=nums.size();
        int i=0;
        for(int it:nums)
        {
            ans^=it;
            ans^=i;
            i++;
        }
        return ans;
    }
};