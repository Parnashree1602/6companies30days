class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0,last=0,n=nums.size();
        int mi=INT_MAX,ma=INT_MIN;
        for(int i = n - 1; i>=0; i--) {
            if(mi > nums[i]) 
            {
                mi = nums[i];
            }
            if(nums[i] > mi) 
            {
                start = i;
            }
        }
        for(int i=0; i<n; i++) {
            if(ma < nums[i]) 
            {
                ma = nums[i];
            } 
            if(nums[i] < ma) 
            {
                last = i;
            }
        }
        if(last-start==0)
        {
            return 0;
        }
        return (last-start+1);
    }
};
