/*
Given a string s containing 0's and 1's. You have to return the smallest positive integer C, such that the binary string can be cut into C pieces and each piece should be of the power of 5  with no leading zeros.
Note: The string s is a binary string. And if no such cuts are possible, then return -1.
*/

class Solution{
    public:
    int cuts(string s){
        int n = s.size();
        
        vector<int> dp(n);
        
        auto gud = [&](int st, int en) -> bool {
            string current = s.substr(st, en - st + 1);
            
            long long val = 0;
            reverse(current.begin(), current.end());
            
            for(int i = 0; i < current.size(); i++){
                if(current[i] == '1')
                    val += 1LL << i;
            }
            
            while(val % 5 == 0)
                val /= 5;
                
            return val == 1;
        };
        
        for(int i = n - 1; i > -1; i--){
            if(s[i] == '0'){
                dp[i] = -1;
                continue;
            }
            
            dp[i] = 1e9;

            for(int j = i; j < n; j++){
                if(gud(i, j)){
                    if(j == n - 1)
                        dp[i] = 1;
                    else if(dp[j + 1] != -1)
                        dp[i] = min(1 + dp[j + 1], dp[i]);
                }
            }
            
            if(dp[i] == 1e9)
                dp[i] = -1;
        }
        
        return dp[0];

        
    }
};
