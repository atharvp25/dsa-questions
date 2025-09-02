//String to integer 
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long a = 0;

        
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        
        if (i < s.length()) {
            if (s[i] == '-') {
                sign = -1;
                i++;
            } else if (s[i] == '+') {
                i++;
            }
        }

        
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            if (a > (long long)INT_MAX + 1) {
                break;
            }    
            a = a * 10 + (s[i] - '0');
            i++;
        }

        
        a *= sign;

        if (a > INT_MAX) return INT_MAX;
        if (a < INT_MIN) return INT_MIN;

        return a;
    }
};
