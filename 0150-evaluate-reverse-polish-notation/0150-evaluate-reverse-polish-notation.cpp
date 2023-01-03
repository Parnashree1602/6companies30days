class Solution {
    bool numcheck(string str)
    {
        for(int i=0; i<str.length(); i++)
        {
            if(isdigit(str[i]) != 0) 
            {
                return true;
            }
        }
        return false;
    }
public:

    int evalRPN(vector<string>& t) {
        stack<long> st;
        for(string it: t)
        {
            if(numcheck(it))
            {
                st.push(stoi(it));
            }
            else
            {
                    long a=st.top();
                    st.pop();
                    long b=st.top();
                    st.pop();
                    if(it=="+")
                    {
                        st.push(b+a);
                    }
                    else if(it=="-")
                    {
                        st.push(b-a);
                    }
                    else if(it=="*")
                    {
                        st.push(b*a);
                    }
                    else if(it=="/")
                    {
                        st.push(b/a);
                    }
            }
        }
        return st.top();
    }
};