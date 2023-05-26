/*
Given a sorted array of size N and an integer K, find the position(0-based indexing) at which K is present in the array using binary search.
*/

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int first=0;
        int last=n-1;
        int mid;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(k==arr[mid])
                return mid;
            else if(k<arr[mid])
                last=mid-1;
            else
                first=mid+1;
        }
        return -1;
    }
};
