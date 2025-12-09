class Solution {
  public:
    string encode(string s) {
        // code here
        int n = s.size();
        string result = "";
        
        for(int i = 0;i<n;)
        {
            char current = s[i];
            int count = 0;
            
            
            while(i < n && s[i] == current)
            {
                count++;
                i++;
            }
            
            result += current;
            result += to_string(count);
        }
        
        return result;
    }
};