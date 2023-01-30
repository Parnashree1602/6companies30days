class Solution {
public:
    const int mod = 1e9+7;
    long long cal_pow(int x){
        long long res=1;
        long long base=2;
        while(x)
        {
            if(x%2==1)
            res=res*base%mod;
            base=base*base%mod;
            x>>=1;
        }
        return res;
    }
    int monkeyMove(int n) {
        long long ans=cal_pow(n);
        ans-=2;
        ans+=mod;
        return ans%mod;
    }
};