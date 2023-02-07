class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //SLIDING WINDOW
        vector<int> ans;
        vector<int> phash(26,0),hash(26,0);
        if(s.size()<p.size())
        {
            return ans;
        }
        int i=0,j=0;
        while(i<p.size())
        {
            phash[p[i]-'a']++;
            hash[s[i]-'a']++;
            i++;
        }
        i--;
        while(i<s.size())
        {
            if(hash==phash)
            {
                ans.push_back(j);
            }
            
                i++;
                if(i!=s.size())
                {
                    hash[s[i]-'a']++;
                    hash[s[j]-'a']--;
                    j++;
                }
        
        }
        return ans;
    }
};