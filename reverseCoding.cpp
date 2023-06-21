/*
You will be given an integer n, your task is to return the sum of all natural number less than or equal to n.

As the answer could be very large, return answer modulo 109+7.
*/

class Solution {
  public:
    int sumOfNaturals(int n) {
        int mod=1e9+7;
        int sum=n*(n+1)/2;
        return sum%mod;
    }
};
