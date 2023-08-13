/*
Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.
*/

class Solution {
  public:
    int nthFibonacci(int n){
        // code here
    int M=1e9+7;
        // code here
        long long a=1,b=1;
        long long res;
        for(int i=1;i<=n-2;i++){
            res=(a+b)%M;
            a=b%M;
            b=res%M;
        }
        return b;
    }
};
