class Solution {
    public List<String> extractInt(String s) {
        // code here
        int n = s.length();
        
        List<String> result = new ArrayList<>();
        
        for(int i=0;i<n;i++)
        {
            char ch = s.charAt(i);
            StringBuilder temp = new StringBuilder();
            
            while(i < n && (ch >= '0' && ch <= '9' ))
            {
                
                temp.append(ch);
                i++;
                
                if(i < n) ch = s.charAt(i);
                else break;
            }
            
            if(temp.length() > 0) result.add(temp.toString());
        }
        
        return result;
    }
}