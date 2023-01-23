class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<long long> v;
        long long d=0,sum=0,sum2=0;
        if(k==0)
        {
             for(long long i=0;i<nums1.size();i++)
        {
            if(nums1[i]!=nums2[i])
            {
                return -1;
            }
        }
            return 0;
        }
        for(long long i=0;i<nums1.size();i++)
        {
            d=nums1[i]-nums2[i];
            v.push_back(nums1[i]-nums2[i]);
            if(d>0)
            {
                sum+=d;
            }
            sum2+=d;
            if(d%k!=0)
            {
                return -1;
            }
        }
        if(sum2==0)
        {
            return (sum/k);
        }
        return -1;
    }
};