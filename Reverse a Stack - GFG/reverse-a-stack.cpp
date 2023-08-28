//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
 void rev(stack<int> &St , vector<int> &arr){
     
     if(St.empty()) return;
     
        else{
         arr.push_back(St.top());
         St.pop(); 
            
        }
         
     rev(St,arr);
 }




    void Reverse(stack<int> &St){
        
        vector<int>arr;
        rev(St,arr);
        
     int i=0;
     
     while(i<arr.size()){
          St.push(arr[i]);
         i++;
     }
          
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends