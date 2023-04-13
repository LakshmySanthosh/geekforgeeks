/*
Given the maximum occurrences of a, b, and c in a string. 
Your task is to make the string containing only a, b, and c such that no three consecutive characters are the same. 
If the resultant string equals to a+b+c, return the length (a+b+c) otherwise -1.
*/

class Solution {
public:
    int solve(int a, int b, int c) {
        int mx = max(a, max(b,c));
        
        if(mx/2 <= (a+b+c)-mx || mx==6)
            return a+b+c;
        
        return -1;
    }
};
