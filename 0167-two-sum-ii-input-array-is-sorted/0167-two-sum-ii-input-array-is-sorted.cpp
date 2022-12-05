class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size()-1;i++){
         int l=i+1,h=numbers.size();
        while(l<h){
            int mid=l+(h-l)/2;
            if(numbers[mid]+numbers[i]==target){          
                 return{i+1,mid+1};       
            }
            else if(numbers[i]+numbers[mid]<=target){
                 l=mid+1;
            }
              else h=mid;           
        }
           if(l!=numbers.size() && numbers[l]+numbers[i]==target) return{i+1,l+1} ;
        }
        return {};
    }
};