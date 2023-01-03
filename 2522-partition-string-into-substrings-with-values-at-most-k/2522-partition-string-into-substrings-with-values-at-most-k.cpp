class Solution {
public:
    int minimumPartition(string s, int k) {
        long b=0;
        int cnt=0;
        for(auto it:s)
        {
            long a=b*10 + (it-'0');
            if(a<=k)
            {
                b=a;
            }
            else
            {
                cnt++;
                b=0;
                a=it-'0';
                if(a<=k)
                {
                    b=a;
                }
                else
                {
                    return -1;
                }
            }
        }
        if(b<=k)
        {
            cnt++;
        }
        return cnt;
    }
};