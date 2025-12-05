class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int i = 0;
        int n =s.size();
        
        while(i < n/2)
        {
            if(s[i] != s[n-i-1]) return false;
            i++;
        }
        
        return true;
    }
};