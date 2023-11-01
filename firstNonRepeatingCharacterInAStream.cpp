/*
Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.

NOTE:
1. You need to find the answer for every i (0 <= i < n)
2. In order to find the solution for every i you need to consider the string from starting position till ith position.
*/

class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>q;
		    unordered_map<char,int>mp; 
		    string ans="";
		    
		    for(int i=0;i<A.size();i++)
		    {
		        mp[A[i]]++;
		        if(mp[A[i]]==1)
		            q.push(A[i]);
		        while(!q.empty() && mp[q.front()]>1)
		            q.pop();
		        if(!q.empty())
		            ans.push_back(q.front());
		        else
		            ans.push_back('#');
		    }
		    return ans;
		}
};
