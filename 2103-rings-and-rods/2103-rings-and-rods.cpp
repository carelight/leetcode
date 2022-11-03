class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        
        int red[10]={0};
        int blue[10]={0};
        int green[10]={0};
        
        for(int i=0;i<n;i+=2){
            if(rings[i]=='R'){
                red[rings[i+1]-'0']=true;
            }
            else if(rings[i]=='B'){
                blue[rings[i+1]-'0']=true;
            }
            else if(rings[i]=='G'){
                green[rings[i+1]-'0']=true;
            }
        }
        int res=0;
        for(int i=0;i<10;i++){
            if(red[i]==1 and green[i]==1 and blue[i]==1){
                res++;
            }
        }
        return res;
    }
        
};




















