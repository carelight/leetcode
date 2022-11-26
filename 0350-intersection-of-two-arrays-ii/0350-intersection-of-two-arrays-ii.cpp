class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>mp;
      vector<int>ans;
      for (int i = 0; i < nums1.size(); i++)
      {
            mp[nums1[i]]+=1;
      }
      
      for (int j = 0; j <nums2.size(); j++)
      {
           if(mp[nums2[j]]>0){
                 mp[nums2[j]]--;
                ans.push_back(nums2[j]);
           }
      }
     return ans; 
    }
};
    