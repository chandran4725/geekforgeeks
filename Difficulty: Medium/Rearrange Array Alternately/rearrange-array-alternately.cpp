class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        int maxi = arr[n-1] + 1;
        
        int left = 0;
        int right = n-1;
        
        for(int i =0;i<n;i++)
        {
            if(i % 2 == 0)
            {
                arr[i] = arr[i] + (arr[right] % maxi) * maxi;
                right--;
            }
            else
            {
                arr[i] = arr[i] + (arr[left] % maxi) * maxi;
                left++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i] = arr[i] / maxi;
        }
    }
};