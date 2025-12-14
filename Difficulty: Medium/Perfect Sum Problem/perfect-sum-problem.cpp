class Solution {
  public:
  
    int findSubsets(int ind,int target,int sum,vector<int> &arr,vector<vector<int>> &dp)
    {
        
        if(ind == arr.size())
        {
            return(target == sum);
        }
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        int left = 0;
        if(sum+arr[ind] <= target)
        {
            left = findSubsets(ind+1,target,sum+arr[ind],arr,dp);
        }
        
        int right = findSubsets(ind+1,target,sum,arr,dp);
        
        return dp[ind][sum] = left+right;
    }
    
    int perfectSum(vector<int>& arr, int target) {
        // code here
        vector<vector<int>> dp(arr.size(),vector<int>(target+1,-1));
        
        return findSubsets(0,target,0,arr,dp);
    }
};