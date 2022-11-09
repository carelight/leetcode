class Solution {
public:
    int maximum69Number (int num) {
             string c= to_string(num);
             for(int i=0;i<c.size();i++){
                 if(c[i]=='6'){
                     c[i]='9';
                        break;
                 }
             }
        int a=stoi(c);
        return a;
    }
};