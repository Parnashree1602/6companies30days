class Solution {
public:
    int countOdds(int low, int high) {
        int cnt=0;
        if(low%2==1)
        {
            for(int i=low;i<=high;i+=2)
            {
                cnt++;
            }
        }
        else
        {
            low++;
            for(int i=low;i<=high;i+=2)
            {
                cnt++;
            }
        }
        return cnt;
    }
};