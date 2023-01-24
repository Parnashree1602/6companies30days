class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        sort(s.begin(),s.end());
        int ans=s[0]-b;
        for(int i=0;i<s.size()-1;i++)
        {
            ans=max(ans,s[i+1]-s[i]-1);
        }
        ans=max(ans,t-s[s.size()-1]);
        return ans;
    }
};