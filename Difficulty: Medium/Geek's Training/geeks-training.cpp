class Solution {
  public:
    int findMaxPoints(int row,int npInd,int m,vector<vector<int>> &arr,vector<vector<int>> &dp)
    {
        if(row == arr.size()-1)
        {
            int maxi = 0;
            for(int i=0;i<m;i++)
            {
                if(npInd != i)
                {
                    maxi = max(maxi,arr[row][i]);
                }
            }
            
            return dp[row][npInd] = maxi;
        }
        
        if(dp[row][npInd] != -1) return dp[row][npInd];
        
        int maxi = 0;
        for(int task = 0;task <m;task++)
        {
            if(npInd != task)
            {
                int points = arr[row][task] + findMaxPoints(row+1,task,m,arr,dp);
                maxi = max(maxi,points);
            }
        }
        
        return dp[row][npInd] = maxi;
    } 
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        
        int n = arr.size();
        int m = arr[0].size();
        
        vector<vector<int>> dp(n,vector<int>(m+1,-1));
        
        return findMaxPoints(0,m,m,arr,dp);
    }
};