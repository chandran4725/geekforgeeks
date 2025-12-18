class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> odd;
        vector<int> even;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] % 2 == 0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        
        int ind = 0;
        
        for(int i=0;i<odd.size();i++)
        {
            arr[ind++] = odd[i];
        }
        
        for(int i=0;i<even.size();i++)
        {
            arr[ind++] = even[i];
        }
    }
};