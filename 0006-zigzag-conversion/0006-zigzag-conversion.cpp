class Solution {
public:
    string convert(string s, int m) {
        vector<string> v(m,"");
        int n=s.size();
        int i=0;
        while(i<n)
        {
            for(int j=0;j<m;j++)
            {
                if(i<n)
                {
                    v[j]+=s[i];
                    i++;
                }
                else
                {
                    break;
                }
            }
            for(int j=m-2;j>=1;j--)
            {
                if(i<n)
                {
                    v[j]+=s[i];
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        string t="";
        for(int j=0;j<m;j++)
        {
            t+=v[j];
        }
        return t;
    }
};