class Solution {
public:
    bool hasZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return true;
            x /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            int x = n - i;
            if (!hasZero(x) && !hasZero(i)) {
                return {x, i};
            }
        }
        return {}; // Just in case, though the problem guarantees a solution
    }
};
