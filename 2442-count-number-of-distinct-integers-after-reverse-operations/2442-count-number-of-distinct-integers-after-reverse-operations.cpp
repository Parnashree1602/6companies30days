class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for(auto it: nums)
        {
            s.insert(it);
            int r = 0;
            while(it)
            {
                r = r*10 + it%10;
                it = it/10;
            }
            s.insert(r);
        }
        return s.size();
    }
};