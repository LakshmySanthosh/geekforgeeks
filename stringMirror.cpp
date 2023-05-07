/*

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
