class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,maxo=0;
        for(int i=0;i<nums.size();i++){
             if(nums[i]==1){
                 cnt++;
             }
            if(nums[i]!=1){
                cnt=0;
            }
            maxo=max(cnt,maxo);
        }   
       return maxo;    
    }
};