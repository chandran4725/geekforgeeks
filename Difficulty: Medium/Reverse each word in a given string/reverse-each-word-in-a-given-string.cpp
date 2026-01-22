class Solution {
  public:
    
    string reverseStr(string &s, int i, int j) {
        string temp = "";
        while (i <= j) {
            temp += s[j];
            j--;
        }
        return temp;
    }
    
    string reverseWords(string &s) {
        int n = s.size();
        string ans = "";
        int left = 0;
        
        for (int right = 0; right <= n; right++) {
            
            if (right == n || s[right] == ' ') {

                // Ignore empty words (due to extra spaces)
                if (left < right) {
                    ans += reverseStr(s, left, right - 1);
                    ans += " ";
                }

                // Move left to next character
                left = right + 1;
            }
            
        }
        
        if (!ans.empty())
            ans.pop_back();
        
        return ans;
    }
};
