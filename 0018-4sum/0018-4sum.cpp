class Solution {
public:
    
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        long n=nums.size();
        if(n<4)
        {
            return ans;
        }
        for(long i=0;i<n-3;i++)
        {
            // if(i>0&&nums[i]==nums[i-1]) continue;
            // if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>t) break;
            // if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<t) continue;
            for(long j=i+1;j<n-2;j++)
            {
                long  tt=long(t)-long(nums[i])-long(nums[j]);
                long l=j+1;
                long r=n-1;
                while(l<r)
                {
                    long sum=long(nums[l])+long(nums[r]);
                    if(sum<tt)
                    {
                        l++;
                    }
                    else if(sum>tt)
                    {
                        r--;
                    }
                    else
                    {
                        vector<int> v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[l];
                        v[3]=nums[r];
                        ans.push_back(v);
                        while(l<r && nums[l]==v[2])
                        {
                            l++;
                        }
                        while(l<r && nums[r]==v[3])
                        {
                            r--;
                        }
                    }
                }
                while(j<n-2 && nums[j]==nums[j+1])
                {
                    j++;
                }
            }
            while(i<n-3 && nums[i]==nums[i+1])
                {
                    i++;
                }
        }
        return ans;
    }
};
// TC=O(n^3)
// 3sum + binary search- TC=O(nlogn)+O(n^3*logn)