class Solution {
public:
    bool isPalindrome(int x) {
        bool as=true;
        string ss=to_string(x);
                string s= to_string(x);
        reverse(s.begin(),s.end());
        if(s==ss){
            return true;
        }
        else return false;
           
    }
};