class Solution {
public:
    int ans=0;
    void helllo(vector<int>& arr, int i, int xorr){
        if(i >= arr.size()){
            ans += xorr;
            return;
        }
        helllo(arr, i+1, xorr^arr[i]);
        helllo(arr, i+1, xorr);
    }
	
    int subsetXORSum(vector<int>& arr) {
       helllo(arr, 0, 0);
       return ans;
    }
};