class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();

        // dp[i][s] = can we make sum s using first i elements
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        // Base case: sum = 0 is always possible
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        // Fill the table
        for (int i = 1; i <= n; i++) {
            for (int s = 1; s <= sum; s++) {

                // Not take current element
                bool notTake = dp[i - 1][s];

                // Take current element (if possible)
                bool take = false;
                if (arr[i - 1] <= s) {
                    take = dp[i - 1][s - arr[i - 1]];
                }

                dp[i][s] = take || notTake;
            }
        }

        return dp[n][sum];
    }
};
