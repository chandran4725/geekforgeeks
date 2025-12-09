// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        
        int n = s.size();
        
        string result = "";
        
        for(int i=0;i<n;i++)
        {
            if(count <= 0) result+=s[i];
            if(s[i] == ch) count--;
            
            
        }
        
        return result;
    }
};