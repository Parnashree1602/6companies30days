class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int t,j;
        for(int i=2;i<n-1;i++)
        {
            vector<int> v;
            t = n;
            while(t)
            {
                v.push_back(t%i);
                t=t/i;
            }
            int x=0;
            j=v.size();
            while(x<j)
            {
                if(v[x]!=v[j-x-1])
                {
                    return false;
                }
                x++;
            }
        }
        return true;
    }
};