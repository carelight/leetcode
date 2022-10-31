class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>arr; 
             for(int i=0;i<nums.size()-1;i=i+2){
                 int m=nums[i];
                  for(int j=0;j<m;j++){
                         arr.push_back(nums[i+1]);
                  }
             }
        return arr;
    }
};