// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum=0;
        int maxi = -1;
        int start = 0;
        
        int st=-1,end=-1;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] >= 0)
            {
                sum += arr[i];
                
                if(sum > maxi || (sum == maxi && (i - start > end - st)))
                {
                    maxi = sum;
                    st =start;
                    end = i;
                }
            }
            else
            {
                sum = 0;
                start = i+1;
            }
        }
        
        if(st == -1) return {-1};
        
        vector<int> res;
        
        for(int i=st;i<=end;i++)
        {
            res.push_back(arr[i]);
        }
        
        
        
        return res;
    }
};