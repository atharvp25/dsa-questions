class Solution {
public:
    int divide(int dividend, int divisor) {
        // We handEl Constrnt Here 
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // We Return intvalue so no need to do other 
        return dividend / divisor;
    }
};
