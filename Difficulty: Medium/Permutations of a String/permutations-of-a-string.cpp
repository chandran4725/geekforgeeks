class Solution {
  public:
    
    void findPermutations(int ind,string &s,set<string> &ans)
    {
        if(ind == s.size())
        {
            ans.insert(s);
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            
            swap(s[ind],s[i]);
            findPermutations(ind+1,s,ans);
            swap(s[ind],s[i]);
        }
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        set<string>ans;
        
        findPermutations(0,s,ans);
        
        return vector<string>(ans.begin(),ans.end());
    }
};
