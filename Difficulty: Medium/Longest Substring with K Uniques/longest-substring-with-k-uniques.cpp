class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        map<char,int> mp;
        int maxlen = -1;
        
        int l=0,r=0;
        
        while(r < n)
        {
            mp[s[r]]++;
            
            if(mp.size() > k)
            {
                mp[s[l]]--;
                
                if(mp[s[l]] == 0) mp.erase(s[l]);
                
                l++;
            }
            
            if(mp.size() == k) maxlen = max(maxlen,(r-l+1));
            
            r++;
        }
        
        
        
        return maxlen;
    }
};