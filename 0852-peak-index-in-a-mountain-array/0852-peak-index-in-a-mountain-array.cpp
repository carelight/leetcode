class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
            
        int l=0,h=arr.size()-1;
       
        int mid=l+(h-l)/2;
        
         while(l<h){
             
        if(arr[mid]<arr[mid+1]){
            l=mid+1;
         }   
         else{ h=mid;       
             }
        mid=l+(h-l)/2;
         }
        return l;
    }
};