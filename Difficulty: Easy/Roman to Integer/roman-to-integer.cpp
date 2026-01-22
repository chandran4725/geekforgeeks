class Solution {
  public:
  
    int convert(char ch)
    {
        switch(ch)
        {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
    }
    
    int romanToDecimal(string &s) {
        // code here
        int n = s.size();
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            if(i+1 < n && convert(s[i]) < convert(s[i+1]))
            {
                ans += convert(s[i+1]) - convert(s[i]);
                i++;
            }
            else ans += convert(s[i]);
        }
        
        return ans;
    }
};