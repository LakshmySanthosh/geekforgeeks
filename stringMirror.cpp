/*
You are given a string str of length n. You want to choose a non-zero integer k (k<=n), such that you can perform the following operation:
Take the prefix of the string of length k and append the reverse of it to itself.
Your task is to find the lexicographically smallest string you can get.
*/

class Solution{
public:
    string stringMirror(string str){
        string sol;
        sol.push_back(str[0]);
        if(str[0]==str[1])
        {
            for(int i=sol.size()-1; i>=0; i--)  
            sol.push_back(sol[i]);
            return sol;
        }
        for(int i=1;i<str.size();i++)
        {
            if(int(str[i])<=int(str[i-1]))
            {
                sol.push_back(str[i]);
            }
            else
                break;
        }
        for(int i=sol.size()-1; i>=0; i--)  
            sol.push_back(sol[i]);
        return sol;
    }
};
