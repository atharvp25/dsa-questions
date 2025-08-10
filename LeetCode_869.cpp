class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string str = to_string(n);
        sort(str.begin(), str.end());

        for (int i = 0; i <= 29; i++) {
            int temp = 1 << i;
            string s = to_string(temp);
            sort(s.begin(), s.end());
            if (s == str) return true;
        }
        return false;
    }
};
