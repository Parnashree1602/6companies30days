class Solution {
public:
    long long pow(long long x,long long y)
    {
        long long i,power=1;
        if(y == 0)
        {
            return 1;
        }
        for(i=1;i<=y;i++)
        {
            power=(power*x)%(1000000007);
        }
        return power;
    }
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        long long u=1;
        int n=ranges.size();
        for(int i=1;i<n;i++)
        {
            if(ranges[i][0]<=ranges[i-1][1])
            {
                ranges[i][1]=max(ranges[i-1][1],ranges[i][1]);
            }
            else
            {
                u++;
            }
        }
        return pow(2,u);
    }
};