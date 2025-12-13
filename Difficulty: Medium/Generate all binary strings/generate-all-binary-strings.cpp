class Solution {
  public:
    void findCombinations(int n,string s,vector<string> &ans)
    {
        if(s.size() == n)
        {
            ans.push_back(s);
            return;
        }
        s.push_back('0');
        findCombinations(n,s,ans);
        s.pop_back();
        
        s.push_back('1');
        findCombinations(n,s,ans);
        s.pop_back();
    }
    vector<string> binstr(int n) {
        // code here
        vector<string> ans;
        string s;
        findCombinations(n,s,ans);
        
        return ans;
    }
};