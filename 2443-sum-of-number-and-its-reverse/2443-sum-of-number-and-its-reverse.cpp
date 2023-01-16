class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=num/2;i<=num;i++)
        {
            int a=i;
            string s=to_string(i);
            reverse(s.begin(),s.end());
            int b=stoi(s);
            if(a+b==num)
            {
                return true;
            }
        }
        return false;
    }
};