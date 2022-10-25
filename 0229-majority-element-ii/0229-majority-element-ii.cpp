class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> arr;
       unordered_map<int, int> mp;
       

        for (auto i:nums)
        {
            if(++mp[i] >nums.size()/3){
                 
                  arr.push_back(i);
            }
        }
        set<int>s(arr.begin(),arr.end());
        vector<int>c(s.begin(),s.end());
               return c; 
    }
};