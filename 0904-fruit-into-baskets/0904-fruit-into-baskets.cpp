class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int i=0,j=0,k=0;
        while(i<fruits.size())
        {
            mp[fruits[i]]++;
            while(mp.size()>2)
            {
                if(mp[fruits[j]]==1)
                {
                    mp.erase(fruits[j]);
                }
                else
                {
                    mp[fruits[j]]--;
                }
                j++;
            }
            k=max(k,i-j+1);
            i++;
        }
        return k;
    }
};