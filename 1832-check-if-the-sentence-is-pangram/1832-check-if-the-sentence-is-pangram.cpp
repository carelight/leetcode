class Solution {
public:
   bool checkIfPangram(string sentence) {
     
         unordered_set<char>a(sentence.begin(),sentence.end());
         if(a.size()==26){
            return true;

         }
         else return false;

    }
};