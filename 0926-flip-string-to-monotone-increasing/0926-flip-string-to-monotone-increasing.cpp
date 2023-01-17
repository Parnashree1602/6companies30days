class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one= 0, z = 0;
        for (auto it:s)
        { 
            if (it == '1')
            {
                one++;
            }
            else
            {
                z++;
                z = min(z,one);
            }
        }
        return z;
    }
};