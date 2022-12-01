class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n=s.size(),cnt=0,c1=0;
      transform(s.begin(),s.end(),s.begin(),::tolower);
      for(int i=0;i<n/2;i++){
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){

               cnt++;
            }
      }
      for(int i=n/2;i<n;i++){
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
               c1++;
            }     
    }
       if(cnt==c1){
         return true;
       }
       return false;
    }
};