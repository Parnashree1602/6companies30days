class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        string s;
        char curchar;
        if(n==1)
        {
            s.push_back(chars[0]);
            chars[0]=s[0];
            return 1;
        }
        for(int i=0;i<n;i++)
        {
            // if(chars[i]==chars[i+1])
            // {
            //     curcount++;
            // }
            // else
            // {
            curchar=chars[i];
                s.push_back(curchar);
                int curcount=1;
                while(i<n-1 && chars[i]==chars[i+1])
                {
                    curcount++;
                    i++;
                }
               if(curcount>1)
               {
                   string num=to_string(curcount);
                for(auto it:num)
                {
                    s.push_back(it);
                }
                }
            //}
        }
        for(int i=0;i<s.size();i++)
        {
            chars[i]=s[i];
        }
        return s.size();
    }
};
        