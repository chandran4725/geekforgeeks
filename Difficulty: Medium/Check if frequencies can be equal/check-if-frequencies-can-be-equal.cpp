class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
       int n = s.size();
       
       map<char,int> mp;
       
       for(int i=0;i<n;i++)
       {
           mp[s[i]]++;
       }
       
       map<int,int> freq;
       
       for(auto it : mp)
       {
           freq[it.second]++;
       }
       
       if(freq.size() == 1) return true;
       else if(freq.size() > 2) return false;
       
       auto it = freq.begin();
       
       int f1 = it->first, c1 = it->second;
       
       it++;
       
       int f2 = it->first, c2 = it->second;
       
       if((f1 == 1 && c1 == 1) || (f2 == 1 && c2 == 1)) return true;
       
       if(abs(f1-f2) == 1)
       {
           if(f1 > f2 && c1 == 1 || f2 > f1 && c2 == 1) return true;
       }
       
       return false;
       
    }
};