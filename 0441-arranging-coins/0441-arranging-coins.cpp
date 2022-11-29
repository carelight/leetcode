class Solution {
public:
    int arrangeCoins(int n) {
        
        int l=1,h=n;
        int cnt=0;
        while(l<=h){
             cnt++;
            h=h-l;
            l++;
        }
        return cnt;
    }
};