class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int maxi = 0;
        
        map<int,int> mp;
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            
            if(sum == k) maxi = max(maxi,i+1);
            
            int rem = sum - k;
            
            if(mp.find(rem) != mp.end()) maxi = max(maxi,i-mp[rem]);
            
            if(mp.find(sum) == mp.end()) mp[sum] = i;
        }
        
        return maxi;
    }
};