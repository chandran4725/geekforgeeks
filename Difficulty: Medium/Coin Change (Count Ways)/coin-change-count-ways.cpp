class Solution {
  public:
    
    int findWays(int ind,vector<int> &arr,int sum,vector<vector<int>> &dp)
    {
        if(sum == 0)
        {
           
            return 1;
        }
        
        if(ind == arr.size()) return 0;
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        int left = 0;
        if(sum >= arr[ind])
        {
           left = findWays(ind,arr,sum-arr[ind],dp);
        }
        
        int right = findWays(ind+1,arr,sum,dp);
        
        return dp[ind][sum] = left + right;
    }
    
    int count(vector<int>& coins, int sum) {
        // code here.
        vector<vector<int>> dp(coins.size()+1,vector<int>(sum+1,-1));
        int count = 0;
        return findWays(0,coins,sum,dp);
        
       
    }
};