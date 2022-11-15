class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr(nums.size());
        int j=0,k=1;
        for(int i=0;i<nums.size();i++){
        if(nums[i]>=0){
            arr[j]=nums[i];
            j=j+2;
        }
            if(nums[i]<0){
                arr[k]=nums[i];
                k=k+2;
            }
        }
        return arr;
    }
};