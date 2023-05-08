/*
You are given a binary string s and an integer m. You need to return an integer r. Where r = k%m, k is the binary equivalent of string s.
*/

class Solution{
    public:
        int modulo(string s,int m)
        {
            long long  val=0, x=1;
            for(int i=s.size()-1; i>=0; i--)
            {
                if(s[i]=='1')
                    val=(val+x)%m;
                x*=2;
                x%=m;
            }
            return val;
        }
};
