class Solution {
public:
    bool isStartingBraket(char c) {
        if (c == '(' || c == '{' || c == '[') {
            return true;
        }
        return false;
    }

    bool isValid(string s) {
        stack<char> st;

        if (s.length() == 1) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {

            if (isStartingBraket(s[i])) {
                st.push(s[i]);
            }
            else if (st.empty()) {
                return false;
            }
            else if (st.top() == '(' && s[i] != ')') {
                return false;
            }
            else if (st.top() == '{' && s[i] != '}') {
                return false;
            }
            else if (st.top() == '[' && s[i] != ']') {
                return false;
            }
            else {
                st.pop();
            }
        }

        if (!st.empty()) {
            return false;
        }

        return true;
    }
};
