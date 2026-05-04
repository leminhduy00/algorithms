class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        if (s.length() % 2 != 0) {
            return false;
        }

        int idx = 0;
        while (idx < s.length()) {
            if ((s[idx] == '{') || (s[idx] == '(') || (s[idx] == '[')) {
                stk.push(s[idx]);
            }
            else if (stk.empty()) {
                return false;
            }
            else if (s[idx] == '}') {
                if (stk.top() != '{') {
                    return false;
                }
                else {
                    stk.pop();
                }
            }
            else if (s[idx] == ']') {
                if (stk.top() != '[') {
                    return false;
                }
                else {
                    stk.pop();
                }
            }
            else if (s[idx] == ')') {
                if (stk.top() != '(') {
                    return false;
                }
                else {
                    stk.pop();
                }
            }
            idx++;
        }

        if (stk.empty() && (idx == s.length())) {
            return true;
        }
        else {
            return false;
        }
    }
};