class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> mp1;
        map<int,int> mp2;
        map<int,int> mp3;
        for(auto it:nums1)
        {
            int a=it[0];
            int b=it[1];
            mp1[a]=b;
        }
        for(auto it:nums2)
        {
            int a=it[0];
            int b=it[1];
            mp2[a]=b;
        }
        for(auto it:mp1)
        {
            if(mp2.find(it.first)!=mp2.end())
            {
                mp3[it.first]=it.second+mp2[it.first];
            }
            else
            {
                mp3[it.first]=it.second;
            }
        }
        for(auto it:mp2)
        {
            if(mp1.find(it.first)!=mp1.end())
            {
                mp3[it.first]=it.second+mp1[it.first];
            }
            else
            {
                mp3[it.first]=it.second;
            }
        }
        vector<vector<int>> v;
        for(auto it:mp3)
        {
            v.push_back({it.first,it.second});
        }
        return v;
    }
};