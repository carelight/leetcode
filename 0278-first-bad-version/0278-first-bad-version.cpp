// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
           
        int low=1,h=n;
        
        while(low<h){
            int mid=low+(h-low)/2;
        if(!isBadVersion(mid)){
            low=mid+1;
        }
        
        else h=mid;
        }
            
        
    return low;
    }
};