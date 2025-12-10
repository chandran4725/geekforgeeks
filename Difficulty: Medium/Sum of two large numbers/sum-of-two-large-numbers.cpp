// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        if (s2.length() > s1.length()) {
            swap(s1, s2);
        }

        int n = s1.length();
        int m = s2.length();

        int i = n - 1;
        int j = m - 1;
        int carry = 0;

        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int digit1 = (i >= 0 ? s1[i] - '0' : 0);
            int digit2 = (j >= 0 ? s2[j] - '0' : 0);

            int sum = digit1 + digit2 + carry;

            result.push_back((sum % 10) + '0');
            carry = sum / 10;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        int pos = 0;
        while (pos < result.size() - 1 && result[pos] == '0') pos++;

        result = result.substr(pos);
        return result;
        
    }
};