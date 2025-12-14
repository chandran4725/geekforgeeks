class Solution {
  public:
    bool findSum(int ind,int target,vector<int> &arr,vector<vector<int>> &dp)
    {
        if(target < 0) return false;
        
        if(target == 0)
        {
            return true;
        }
        
        if(ind >= arr.size()) return false;
        
        if(dp[ind][target] != -1) return dp[ind][target];
        
        bool left = false;
        
        if(arr[ind] <= target)
        {
            left = findSum(ind+1,target-arr[ind],arr,dp);
        }
        
        bool right = findSum(ind+1,target,arr,dp);
        
        return dp[ind][target] = left || right;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        vector<vector<int>> dp(arr.size(),vector<int>(sum+1,-1));
        return findSum(0,sum,arr,dp);
    }
};