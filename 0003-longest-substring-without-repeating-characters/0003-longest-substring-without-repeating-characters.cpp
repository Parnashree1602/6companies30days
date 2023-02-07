class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0;
        set<char> st;
        int ans=0;
        for(r=0;r<n;r++)
        {
            if(st.find(s[r])==st.end())
            {
                st.insert(s[r]);
                ans=max(ans,r-l+1);
            }
            else
            {
                while(s[l]!=s[r])
                {
                    st.erase(s[l]);
                    l++;
                }
                st.erase(s[l]);
                l++;
                st.insert(s[r]);
                ans=max(ans,r-l+1);
            }
        }
        return ans;
    }
};
        
