class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        int left = 0;
        int right = 0;
        vector<int> temp;
        
        while(left < n && right < m)
        {
            if(a[left] <= b[right])
            {
                temp.push_back(a[left++]);
            }
            else temp.push_back(b[right++]);
        }
        
        while(left < n) temp.push_back(a[left++]);
        while(right < m) temp.push_back(b[right++]);
        
        int ind = 0;
        
        for(int i=0;i<n;i++)
        {
            a[i] = temp[ind++];
        }
        
        for(int j=0;j<m;j++)
        {
            b[j] = temp[ind++];
        }
        
        
    }
};