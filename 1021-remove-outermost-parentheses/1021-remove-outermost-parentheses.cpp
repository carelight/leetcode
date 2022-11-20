class Solution {
public:
   string removeOuterParentheses(string S) {
    stack<char>st;
    string ans;
    for(auto a:S)
    {
        if(a=='(')
        {
            if(st.size()>0)
            {
                ans+='(';
            }
            st.push('(');
        }
        else
        {
            if(st.size()>1)
            {
                ans+=')';
            }
            st.pop();
        }
    }
    return ans;
}
};