class Solution {
  public:
    int getCount(string S, int N) {

        vector<int> occ(26, 0);
        int n = S.size();

        for(int i = 0; i < n; i++) {
            // count only when new group starts
            if(i == 0 || S[i] != S[i - 1]) {
                occ[S[i] - 'a']++;
            }
        }

        int count = 0;
        for(int i = 0; i < 26; i++) {
            if(occ[i] == N)
                count++;
        }

        return count;
    }
};
