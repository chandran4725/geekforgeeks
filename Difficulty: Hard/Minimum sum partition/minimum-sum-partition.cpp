class Solution {

  public:
    int minDifference(vector<int>& arr) {
        // Your code goes here
        
        int n = arr.size();
        
        int totalSum = 0;
        
        for(int i=0;i<n;i++)
        {
            totalSum += arr[i];
        }
        
        vector<bool> prev(totalSum+1/2,0);
        vector<bool> curr(totalSum+1/2,0);
        
        prev[0] = true;
        
        
        for(int i=1;i<=n;i++)
        {
            curr[0] = true;
            for(int j=1;j<=totalSum/2;j++)
            {
                bool left =prev[j];
                bool right = false;
                
                if(arr[i-1] <= j)
                {
                    right = prev[j-arr[i-1]];
                }
                
                curr[j] = left || right;
            }
            
            prev = curr;
        }
        
        int mini = 1e9;
        for(int i=0;i<=totalSum/2;i++)
        {
            if(prev[i] == true)
            {
                mini = min(mini,abs((totalSum - i) - i));
            }
            
        }
        
        return mini;
    }
};
