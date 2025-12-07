class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        
        
        int n= arr.size();
        
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i] != arr[j])
            {
                arr[j+1] = arr[i];
                j++;
            }
        }
        
        vector<int> res;
        
        for(int i=0;i<=j;i++)
        {
            res.push_back(arr[i]);
        }
        
        return res;
        
       
    }
};