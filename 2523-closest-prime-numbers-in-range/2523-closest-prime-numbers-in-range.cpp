class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> c(1e6+1,0);
        vector<int> prime;
        for(int i=2;i<=1e6;i++)
        {
            if(c[i]==0)
            {
                prime.push_back(i);
                for(int j=i;j<=1e6;j+=i)
                {
                    c[j]++;
                }
            }
        }
        int mi=INT_MAX;
        int a=-1,b=-1;
        for(int i=0;i<prime.size()-1;i++)
        {
            if(prime[i]>=left && prime[i+1]<=right)
            {
                if(prime[i+1]-prime[i]<mi)
                {
                    mi=prime[i+1]-prime[i];
                    a=prime[i];
                    b=prime[i+1];
                }
            }
        }
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};