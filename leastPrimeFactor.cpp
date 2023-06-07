/*
Given a number N, find the least prime factors for all numbers from 1 to N.  The least prime factor of an integer X is the smallest prime number that divides it.
Note :

1 needs to be printed for 1.
You need to return an array/vector/list of size N+1 and need to use 1-based indexing to store the answer for each number.
*/

class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            if(i==0)
                ans.push_back(0);
            else if(i==1)
                ans.push_back(1);
            else
            {            
                for(int j=2;j<=n;j++)
                {
                    if(i%j==0)
                    {
                        ans.push_back(j);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
