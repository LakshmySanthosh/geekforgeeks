/*
Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.
*/


class Solution{
public:
int m= 1e9+7;
    int nCr(int n, int r){
        int dp[n+1][r+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=r;j++){
                if(j==0) dp[i][j] = 1;
                else if(i==j)dp[i][j]=1;
                else if(j>i) dp[i][j] = 0;
                else{
                    dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%m;
                }
            }
        }
        return dp[n][r];
    }
};
