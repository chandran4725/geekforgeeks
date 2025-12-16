class Solution {
  public:
    string crossPattern(string s) {
        // code here
        int n = s.size();
        int ind = 0;
        string res;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i == j) res += s[i];
                else if(n - i -1 == j) res+= s[n-i-1];
                else res += " ";
            }
        }
        
        return res;
    }
};