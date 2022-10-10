class Solution {
public:
    int reverse(int x) {
        int temp,rv=0;
          
          while(x!=0){
                if(rv>INT_MAX/10 || rv<INT_MIN/10){
                return 0;}
          else{  temp=x%10;
             rv=rv*10+temp;
              x=x/10;
              }
          }
          return rv;
    }


};