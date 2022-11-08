class Solution {
public:
    int subtractProductAndSum(int n) {
        string ss=to_string(n);
        int sum=0;int mul=1,res=0;
        for(int i=0;i<ss.size();i++){
            sum += (ss[i]-'0');
            mul*=(ss[i]-'0');
        }
        res=mul-sum;
        return res;
    }
    
};