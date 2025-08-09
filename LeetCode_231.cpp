class Solution {
public:
    bool isPowerOfTwo(int n) {
    if (n <= 0){
        return false;
    }   
    int i = 0;
    int comp = 0;
    while (i < 31) {           
        comp = 1 << i;
        if (comp == n) {
            return true;
        }
        i++;
    }
    return false;
}

};
