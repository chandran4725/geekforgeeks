class Solution {
  public:
    int isValid(string &s) {
        // code here
       int n = s.size();
       int dots = 0;
       string parts = "";
       
       for(int i=0;i<=n;i++)
       {
           if(i == n || s[i] == '.')
           {
               if(parts.size() == 0) return 0;
               
               if(parts.size() > 1 && parts[0] == '0') return 0;
               
               for(char c : parts)
               {
                   if(!isdigit(c)) return 0;
               }
               
               int num = stoi(parts);
               
               if(num < 0 || num > 255) return 0;
               
               parts = "";
               dots++;
           }
           else
           {
               parts += s[i];
           }
       }
       
       if(dots == 4) return 1;
       
       return 0;
        
    }
};