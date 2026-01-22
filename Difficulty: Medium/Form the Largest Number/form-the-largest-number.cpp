class Solution {
  public:
        static bool myComparator(int &a,int &b){
            
            string s1 = to_string(a);
            string s2 = to_string(b);
            return (s1+s2) > (s2+s1);
        };
    string findLargest(vector<int> &arr) {
        // code here
        
        
        sort(arr.begin(),arr.end(),myComparator);
        
        string result = "";
        
        if(arr[0] == 0) return "0";
        
        for(int num : arr)
        {
            result+=to_string(num);
        }
        
        return result;
    }
};