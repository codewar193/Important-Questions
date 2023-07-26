//TC: O(n^3)
//=============================

class Solution {
public:
    string longestPalindrome(string s) {
        int max_ = 0;
        string ans;

        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                string sub_str = s.substr(i, j - i + 1);
                if (isPalindrome(sub_str)) {
                    if (j - i + 1 > max_) {
                        max_ = j - i + 1;
                        ans = sub_str;
                    }
                }
            }
        }
        return ans;
    }

private:
    bool isPalindrome(string str) {
        string reversed_str = str;
        reverse(reversed_str.begin(), reversed_str.end());
        return str == reversed_str;
    }
};


//TC: O(n^2) using DP
//=========== ==================

class Solution {
public:
    bool solve(vector<vector<bool>>& dp, string& s, int i, int j) {
        if (i == j)
            dp[i][j] = true;
        else if (j - i == 1 && s[i] == s[j])
            dp[i][j] = true;
        else {
            if (s[i] == s[j] && dp[i + 1][j - 1])
                dp[i][j] = true;
            else
                dp[i][j] = false;
        }

        return dp[i][j];
    }

    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int start = 0;
        int maxLength = 1;

        for (int len = 1; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (solve(dp, s, i, j) && len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }

        string ans = s.substr(start, maxLength);
        return ans;
    }
};
