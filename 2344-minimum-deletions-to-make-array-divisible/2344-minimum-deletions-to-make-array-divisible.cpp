class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& n) {
        int a=n[0];
        for(auto it:n)
        {
            a=gcd(a,it);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(a>=nums[i])
            {
                if(a%nums[i]==0)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};