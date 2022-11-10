class Solution {
public:
    int minOperations(vector<int>& nums) {
        int rem=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            else{
                rem=rem+(nums[i]+1-nums[i+1]);
                nums[i+1]=nums[i]+1;
            }
        }
        return rem;
    }
};