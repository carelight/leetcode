class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='c')
                st.push(s[i]);
            else{
                if(!st.empty()){
                    if(st.top()=='b')
                        st.pop();
                    else
                        return false;
                }
                if(!st.empty()){
                    if(st.top()=='a')
                        st.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        return st.size()==0;
    }
};