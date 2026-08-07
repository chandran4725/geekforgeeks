class Solution {
    public int maxSubarraySum(int[] arr, int k) {
        // Code here
        int n = arr.length;
        
        int maxSum = Integer.MIN_VALUE;
        
        int left = 0, right = 0;
        
        int sum = 0;
        
        while(right < n)
        {
            sum = sum + arr[right];
            
            int len = (right - left) + 1;
            
            if(len > k)
            {
                sum = sum - arr[left];
                left++;
            }
            
            len = (right - left) + 1;
            
            if(len == k)
            {
                maxSum = Math.max(maxSum,sum);
            }
            
            right++;
        }
        
        return maxSum;
    }
}