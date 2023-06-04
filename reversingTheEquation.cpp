/*
Given a mathematical equation that contains only numbers and +, -, *, /. 
Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.
It is guaranteed that the given equation is valid, and there are no leading zeros.
*/

class Solution
{
  public:
    string reverseEqn (string s)
    {
        s='*'+s;
        reverse(s.begin(),s.end());
        int prev = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*'||s[i]=='/'||s[i]=='-'||s[i]=='+')
            {
                reverse(s.begin()+prev,s.begin()+i);
                prev=i+1;
            }
        }
        return s.substr(0,s.length()-1);
    }
};
