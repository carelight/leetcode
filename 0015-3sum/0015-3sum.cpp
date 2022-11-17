class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());    
        if(nums.size() < 3){   
            return {};
        }
        if(nums[0] > 0){        
            return {};
        }
        vector<vector<int>> answer;
        for(int i = 0 ; i < nums.size() ; ++i){     
            if(nums[i] > 0){     
                break;
            }
            if(i > 0 && nums[i] == nums[i - 1]){   
                continue;
            }
            int low = i + 1 , high = nums.size() - 1;   
            int sum = 0;
            while(low < high){                       
                sum = nums[i] + nums[low] + nums[high];
                if(sum > 0){  
                    high--;
                } else if(sum < 0){ 
                    low++;
                } else {
                    answer.push_back({nums[i] , nums[low] , nums[high]});  //we have found the required triplet, push it in answer vector
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high];  //Now again, to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high] respectively
                    while(low < high && nums[low] == last_low_occurence){   // Update the low and high with last occurences of low and high.
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence){
                        high--;
                    }
                }
            }
        }
        return answer;      //Return the answer vector.
    }
};