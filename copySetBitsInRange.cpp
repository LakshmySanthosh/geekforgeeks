/*
Given two numbers X and Y, and a range [L, R] where 1 <= L <= R <= 31. 
You have to copy the set bits of 'Y' in the range L to R in 'X'. 
Return this modified X.

Note: Range count will be from Right to Left & start from 1.
*/

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        l--;
        r--;
        for(int i=l;i<=r;i++){
            int temp=1<<i;
            if(y&temp){
                x=x|(y&temp);
            }
            
        }
        return x;
    }
};
