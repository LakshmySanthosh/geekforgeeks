/*
There are N bowls containing cookies. In one operation, you can take one cookie from any of the non-empty bowls and put it into another bowl. 
If the bowl becomes empty you discard it. You can perform the above operation any number of times. 
You want to know the maximum number of bowls you can have with an identical number of cookies.

Note: All the non-discarded bowls should contain the identical number of cookies.
*/

class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        long long sum=0;
        for(long long i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        for(int i=N;i>0;i--)
        {
            if(sum%i==0)
                return i;
        }
    }
};
