class Solution {
public:
    int strStr(string h, string g) {
        int n=h.size();
        int m=g.size();
        if(m>n)
        {
            return -1;
        }
        else
        {
            for(int i=0;i<=n-m;i++)
            {
                bool f=0;
                if(h[i]==g[0])
                {
                    for(int j=1;j<m;j++)
                    {
                        if(h[i+j]!=g[j])
                        {
                            f=1;
                        }
                    }
                    if(f==0)
                    {
                        return i;
                        break;
                    }
                }
            }
        }
        return -1;
        
    }
};