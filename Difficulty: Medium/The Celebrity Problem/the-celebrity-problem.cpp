class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        vector<int> knowMe(n,0);
        vector<int> iKnow(n,0);
        
        int ans = -1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i == j) continue;
                
                if(mat[i][j] == 1) 
                {
                    iKnow[i]++;
                    knowMe[j]++;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(knowMe[i] == n-1 && iKnow[i] == 0) ans = i;
        }
        
        return ans;
    }
};