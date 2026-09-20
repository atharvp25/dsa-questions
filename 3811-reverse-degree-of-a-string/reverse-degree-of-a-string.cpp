class Solution {
public:
    int reverseDegree(string s) {
        long long sum=0;
        for(int i=0;i<s.length();i++){
            int product = abs(s[i]-123) * (i+1);
            sum+=product;
        }
        return sum;
    }
};