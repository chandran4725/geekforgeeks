class Solution {
  public:
    int findElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        int ans  = 0;
        int maxi = 0;
        
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1] < arr[i] && arr[i] < arr[i+1]) ans = arr[i];
            else maxi = max(maxi,arr[i]);
        }
        
        if(ans > maxi) return ans;
        
        return -1;
    }
};