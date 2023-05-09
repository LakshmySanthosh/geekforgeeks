/*
Given an integer N. Your task is to find the number of binary strings of length N having no consecutive 1s.
As the number can be large, return the answer modulo 10^9+7.
*/

class Solution {
public:
    
    #define vi vector<int>
    #define vvi vector<vi>
    const int MOD = 1e9+7;
    
    //Multiply Code Here
    vvi mul(vvi& mat1, vvi& mat2) {
        //Size assigned to variables
        int r1 = mat1.size(), c1 = mat1[0].size();
        int r2 = mat2.size(), c2 = mat2[0].size();
        
        
        if(c1 != r2) return {};
        
        vvi res(r1, vi(c2));
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                long long val = 0;
                for(int k = 0; k < c1; k++) {
                    val += ((long long)mat1[i][k]) * mat2[k][j];
                    val %= MOD;
                }
                res[i][j] = val;
            }
        }
        
        return res;
    }
    //I don't know why they did this
    vvi power(vvi& mat, long long n) {
        int r = mat.size();
        vvi res(r, vi(r));
        for(int i = 0; i < r; i++)
            res[i][i] = 1;
        
        while(n) {
            if(n & 1) 
                res = mul(res, mat);
            mat = mul(mat, mat);
            n >>= 1;
        }
        return res;
    }
    //fibonacci logic here
    int fib(long long n) {
        vvi mat = {{0,1},
                   {1,1}};
        vvi base = {{0},
                    {1}};
        
        mat = power(mat, n);
        vvi res = mul(mat, base);
        return res[0][0];
    }
      
    int countStrings(long long int n) {
        return fib(n+2);
    }
};
