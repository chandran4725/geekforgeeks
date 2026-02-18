class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        int maxi = arr[n-1] + 1;
        
        int left = 0,right = n-1;
        
        for(int i=0;i<n;i++)
        {
            if(i % 2 == 0) arr[i] = arr[i] + (arr[right--]%maxi) * maxi;
            else arr[i] = arr[i] + (arr[left++]%maxi) * maxi;
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i] /= maxi;
        }
        
        return arr;
    }
};
