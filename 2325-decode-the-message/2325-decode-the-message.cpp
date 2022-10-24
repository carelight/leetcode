class Solution {
public:
    string decodeMessage(string key, string message) {
           map<char,char>mp;
           char all ='a';
           for (int i = 0; i < key.size(); i++)
           {
              if(key[i]!=' ' && mp.find(key[i])==mp.end()){
                 mp[key[i]]=all;
                 all++;
              }
           }
           string ss="";
        for (int i = 0; i <message.size(); i++)
        {
            if(message[i]!=' '){
                    ss+=mp[message[i]];
            }
            else ss+=" ";
        }
        return ss;
         
    }
};