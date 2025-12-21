// User function template for C++

class Solution {
  public:
    string ones[20] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};

    string tens[10] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    string numToWord(int n)
    {
        string res;
        
        if(n >= 100)
        {
            res += ones[n / 100] + " Hundred";
            n %= 100;
            
            if(n) res += " "; 
        }
        
        if(n >= 20)
        {
            res += tens[n / 10];
            
            if(n % 10)
            {
                res += " " + ones[n % 10];
            }
        }
        
        else if(n > 0) res += ones[n];
        
        return res;
    }

    string convertToWords(int n) {
        // code here
        if(n == 0) return "Zero";
        
        string res;
        
        if(n >= 1000000000) 
        {
            res += numToWord(n / 1000000000) + " Billion ";
            n %= 1000000000;
        }
        
        if(n >= 1000000)
        {
            res += numToWord(n / 1000000) + " Million ";
            n %= 1000000;
        }
        
        if(n >= 1000)
        {
            res += numToWord(n / 1000) + " Thousand ";
            n %= 1000;
        }
        
        if(n > 0)
        {
            res += numToWord(n);
        }
        
        if(!res.empty() && res.back() == ' ') res.pop_back();
        
        return res;
    }
};