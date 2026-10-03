int longestValidParentheses(char* s) {
    
    int n = strlen(s);

    if (n == 0)
        return 0;

    int l = 0, r = 0, m = 0;

    // Left to Right
    for (int i = 0; i < n; i++) {

        if (s[i] == '(')
            l++;
        else
            r++;

        if (l == r) {
            if (m < l + r)
                m = l + r;
        }
        else if (r > l) {
            l = 0;
            r = 0;
        }
    }

    l = 0;
    r = 0;

    // Right to Left
    for (int i = n - 1; i >= 0; i--) {

        if (s[i] == '(')
            l++;
        else
            r++;

        if (l == r) {
            if (m < l + r)
                m = l + r;
        }
        else if (l > r) {
            l = 0;
            r = 0;
        }
    }

    return m;
}