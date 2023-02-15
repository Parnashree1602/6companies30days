class Solution {
public:
    string addBinary(string a, string b) {
        int sum=0,carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        string s;
        while(i>=0 || j>=0)
        {
            sum=carry;
            if(i>=0)
            {
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0)
            {
                sum+=b[j]-'0';
                j--;
            }
            if(sum>1)
            {
                carry=1;
            }
            else
            {
                carry=0;
            }
            s+=to_string(sum%2);
        }
        if(carry==1)
        {
            s+=to_string(carry);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};