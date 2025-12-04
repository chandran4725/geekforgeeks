class Solution {
  public:
  
    void findSubsets(int ind,int sum,vector<int> &arr,vector<int> &ans)
    {
        if(ind == arr.size())
        {
            ans.push_back(sum);
            return;
        }
        
       
            
            findSubsets(ind+1,sum+arr[ind],arr,ans);
            
            findSubsets(ind+1,sum,arr,ans);
        
    
    }
    
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        int sum = 0;
        
        findSubsets(0,sum,arr,ans);
        
        return ans;
    }
};