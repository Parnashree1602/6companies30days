class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        unordered_set<string> st(w.begin(),w.end());
        queue<pair<string,int>> q;
        q.push({b,1});
        st.erase(b);
        while(!q.empty())
        {
            string s=q.front().first;
            int n=q.front().second;
            q.pop();
            if(s==e)
            {
                return n;
            }
            for(int i=0;i<s.size();i++)
            {
                char ori=s[i];
                for(char j='a';j<='z';j++)
                {
                    s[i]=j;
                    if(st.find(s)!=st.end())
                    {
                        st.erase(s);
                        q.push({s,n+1});
                    }
                }
                s[i]=ori;
            }
        }
        return 0;
    }
};