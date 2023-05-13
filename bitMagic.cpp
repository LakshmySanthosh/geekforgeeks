/*
Given an integer array arr[] of size n which contains only 1 and 0. Your task is to make the array perfect. 
An array is said to be perfect if for each i from 0 to n-1 arr[i]==arr[n-1-i] is satisfied. 

To Make the array perfect you are allowed to do the following operation  :

In one operation you can choose two different indexes i and j and set value of both arr[i] and arr[j] to arr[i]^arr[j].

Your task is to make the array perfect in minimum possible number of operations and return the number of operations.

Note: 0-based indexing is used.
*/

class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int j=n-1, count=0;
        for(int i=0; i<n/2; i++)
        {
            if(arr[i]!=arr[j])
                count++;
            j--;
        }
        if(count==1)    return 1;
        else if(count%2==1)
        return count/2+1;
        return count/2;
    }
};
