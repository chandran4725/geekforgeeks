class Solution {
  public:
    void findCombinations(int ind,int target,vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(target == 0)
        {
            ans.push_back(ds);
            return;
        }
        
        if(ind == arr.size()) return;
        
        if(arr[ind] <= target) 
        {
             ds.push_back(arr[ind]);    
        findCombinations(ind,target-arr[ind],arr,ds,ans);
        
        ds.pop_back();
        }
        
       
        findCombinations(ind+1,target,arr,ds,ans);
    }
    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        // code here
        vector<vector<int>> ans;
        vector<int> ds;
        
        findCombinations(0,target,arr,ds,ans);
        
        return ans;
    }
};