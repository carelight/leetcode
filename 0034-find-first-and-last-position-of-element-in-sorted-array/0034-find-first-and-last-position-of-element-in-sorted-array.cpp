class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>arr;
        int ans=-1,him=-1;
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
             
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else if(nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        arr.push_back(ans);
        
        l=0,h=nums.size()-1;
        while(l<=h){
            int mid1=l+(h-l)/2;
            if(nums[mid1]==target){
                him=mid1;
                l=mid1+1;
            }
            else if(nums[mid1]<target) l=mid1+1;
            else h=mid1-1;
        }
        arr.push_back(him);
        return arr;
    }
};