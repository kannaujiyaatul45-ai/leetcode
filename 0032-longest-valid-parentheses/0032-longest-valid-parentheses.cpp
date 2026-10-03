class Solution {
public:
    int longestValidParentheses(string s) {

        if (s.length() == 0)
            return 0;

        int l = 0, r = 0, m = 0;

        // Left to Right
        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(')
                l++;
            else
                r++;

            if (l == r) {
                m = max(m, l + r);
            }
            else if (r > l) {
                l = 0;
                r = 0;
            }
        }

        l = 0;
        r = 0;

        // Right to Left
        for (int i = s.length() - 1; i >= 0; i--) {

            if (s[i] == '(')
                l++;
            else
                r++;

            if (l == r) {
                m = max(m, l + r);
            }
            else if (l > r) {
                l = 0;
                r = 0;
            }
        }

        return m;
    }
};