class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=*max_element(nums.begin(),nums.end());
        int len=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
                if(nums[i]==l)
                {
                    len++;
                    ans=max(ans,len);
                }
                else
                {
                    //ans=max(ans,len);
                    len=0;
                }
            
        }
        return ans;
    }
};