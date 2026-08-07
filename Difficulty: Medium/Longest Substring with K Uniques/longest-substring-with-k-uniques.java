class Solution {
    public int longestKSubstr(String s, int k) {
        // code here
        int n = s.length();
        
        Map<Character,Integer> mp = new HashMap<>();
        
        int left = 0, right = 0;
        int maxLen = Integer.MIN_VALUE;
        
        while(right < n)
        {
            mp.put(s.charAt(right),mp.getOrDefault(s.charAt(right),0)+1);
            
            while(mp.size() > k)
            {
                mp.put(s.charAt(left),mp.getOrDefault(s.charAt(left),0)-1);
                
                if(mp.getOrDefault(s.charAt(left),0) == 0) 
                {
                    mp.remove(s.charAt(left));
                }
                
                left++;
            }
            
            if(mp.size() == k)
            {
                int len = right - left + 1;
                maxLen = Math.max(maxLen,len);
            }
            
            right++;
        }
        
        return maxLen == Integer.MIN_VALUE ? -1 : maxLen;
    }
}