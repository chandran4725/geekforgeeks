// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        map<char,bool> mp;
        
        for(int i=0;i<str2.size();i++)
        {
            mp[str2[i]] = true;
        }
        
        string res;
        
        for(int i=0;i<str1.size();i++)
        {
            if(mp.find(str1[i]) == mp.end()) res += str1[i];
        }
        
        return res;
    }
};
