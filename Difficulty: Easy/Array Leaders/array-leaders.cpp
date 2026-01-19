

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int maxi = arr[n-1];
        vector<int> ans;
        ans.push_back(maxi);
        
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i] >= maxi)
            {
                maxi = arr[i];
                ans.push_back(maxi);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};