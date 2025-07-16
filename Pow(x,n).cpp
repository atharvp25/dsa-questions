class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
       return  power(x,N);
    }
    double power(double x,long long n){
        if(n==0){
            return 1;
       }
       else if( n < 0){
        return 1/power(x,-n);
       }  
       double half = power(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return x * half * half;
        }
    }
};
