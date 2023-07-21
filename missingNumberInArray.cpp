/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
*/

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++)
        {
            if(array[i]!=i+1)
                return i+1;
        }
        return n;
    }
};
