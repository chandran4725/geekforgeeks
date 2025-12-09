class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        
        int n = a.size();
        int m = b.size();
        
        int i=0;
        int j=0;
        
        while(i < n && j < m)
        {
            if(a[i] != b[j]) return i;
            
            i++;
            j++;
        }
        
        return n-1;
    }
};