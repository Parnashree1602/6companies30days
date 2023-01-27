class Solution {
public:
    vector<int> ans;
    vector<int> shuf;
    int n;
    Solution(vector<int>& nums) {
        ans=nums;
        shuf=nums;
        n=nums.size();
    }
    
    vector<int> reset() {
        return ans;
    }
    
    vector<int> shuffle() {
         vector<int> shuf = ans;
        for(int i=n-1;i>=0;i--)
        {
            int t=rand()%(i+1);
            swap(shuf[i],shuf[t]);
        }
         return shuf;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */