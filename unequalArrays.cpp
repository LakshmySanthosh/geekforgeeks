/*
You are given two arrays A and B each of length N. You can perform the following operation on array A zero or more times. 

Select any two indices i and j, 1 <= i , j <= N and i != j
Set A[i] = A[i] + 2 and A[j] = A[j]-2
Find the minimum number of operations required to make A and B equal
*/

class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        vector<int> AElem[2];
        vector<int> BElem[2];
        long long sum1=0, sum2=0;
        long long sol, ans=0;
        
        for(int i=0; i<N; i++)
        {
            //sum of all elements of both array to check if it is equal or not
            sum1+=A[i];
            sum2+=B[i];
            
            //A array's elements are pushed into 0th and 1st position seperated as even and odd
            if(abs(A[i]%2)==0)
                AElem[0].push_back(A[i]);
            else
                AElem[1].push_back(A[i]);
            //B array's elements are pushed into 0th and 1st position seperated as even and odd    
            if(abs(B[i]%2)==0)
                BElem[0].push_back(B[i]);
            else
                BElem[1].push_back(B[i]);
        }
        
        //If sum1!=sum2 or number of even and odd elements are not equal then return -1
        if(sum1!=sum2 || AElem[0].size()!=BElem[0].size())
            return -1;
            
        for(int i=0; i<2; i++)
        {
            //Sorting both arrays
            sort(AElem[i].begin(), AElem[i].end());
            sort(BElem[i].begin(), BElem[i].end());
            
            for(int j=0; j<AElem[i].size(); j++)
            {
                //number of steps to make both equal
                ans+=abs((AElem[i][j]-BElem[i][j])/2);
            }
        }
        
        //because two values will change at a time
        return ans/2;

    }
};
