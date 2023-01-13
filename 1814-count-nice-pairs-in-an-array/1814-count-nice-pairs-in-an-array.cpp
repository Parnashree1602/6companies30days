class Solution {
public:
    int f(int n)
    {
	int r = 0;
	while(n) 
    {
        r = r * 10 + (n % 10);
        n /= 10;
    }
	return r;
}
    int countNicePairs(vector<int>& nums) {
	long n = 0;
	unordered_map<int, long> mp;
	for(auto& it : nums) 
    {
        mp[it - f(it)]++;  
    }
	for(auto& it : mp)  
    {
        n = (n + (it.second * (it.second - 1)) / 2) % 1000000007; 
    }
	return n;
   }
};