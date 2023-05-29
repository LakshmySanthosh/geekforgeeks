/*
Given a dictionary of words where each word follows CamelCase notation, print all words (in lexicographical order) in the dictionary 
that match with a given pattern consisting of uppercase characters only.

Example: GeeksForGeeks matches the pattern "GFG", because if we combine all the capital letters in GeeksForGeeks they become GFG.

CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. 
Common examples include PowerPoint and Wikipedia, GeeksForGeeks, CodeBlocks, etc.
*/

class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        vector<string> ans;
        string str;
        for(int i=0;i<N;i++)
        {
            int flag=0;
            for(int j=0;j<Dictionary[i].size();j++)
            {
                if (int(Dictionary[i][j])<=90 && int(Dictionary[i][j])>=65)
                {
                    str=str+(Dictionary[i][j]);
                }
            }
            for(int i=0;i<Pattern.size();i++)
            {
                if(str[i]!=Pattern[i])
                    flag=1;
            }
            if(flag==0)
                ans.push_back(Dictionary[i]);
            str.clear();
        }
        if(!ans.size())
            ans.push_back({-1});
        return ans;
    }
};
