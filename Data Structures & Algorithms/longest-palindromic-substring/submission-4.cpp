class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int ans = 1;
        int start = 0;

        for(int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        for(int len = 2; len <= n; len++) {
            for(int i = 0; i + len - 1 < n; i++) {

                int j = i + len - 1;

                if(s[i] == s[j]) {

                    if(len == 2)
                        dp[i][j] = true;
                    else
                        dp[i][j] = dp[i + 1][j - 1];

                }

                if(dp[i][j] && len > ans) {
                    ans = len;
                    start = i;
                }
            }
        }

        return s.substr(start, ans);
    }
};