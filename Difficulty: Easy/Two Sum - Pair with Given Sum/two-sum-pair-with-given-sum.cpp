class Solution {
  public:
    bool twoSum(vector<int>& nums, int target) {
        // code here
         unordered_map<int,int> mp;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            int rem = target - nums[i];

            if(mp.find(rem) != mp.end()) return true;

            mp[nums[i]] = i;
        }

        return false;
    }
};