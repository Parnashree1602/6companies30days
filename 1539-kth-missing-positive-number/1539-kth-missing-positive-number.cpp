class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v(2001);
        for(auto it:arr)
        {
            v[it]++;
        }
        int c=0;
        for(int i=1;i<=2000;i++)
        {
            if(v[i]==0)
            {
                c++;
            }
            if(c==k)
            {
                return i;
            }
        }
        return -1;
    }
};