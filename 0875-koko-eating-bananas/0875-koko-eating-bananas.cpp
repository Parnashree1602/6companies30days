class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int he) {
        int l=1,h=*(max_element(piles.begin(),piles.end()));
        int ans=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            long long hr=0;
            for(int i=0;i<piles.size();i++)
            {
                hr+=ceil(piles[i]/(double)m);
            }
            if(hr<=he)
            {
                ans=m;
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};