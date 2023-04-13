/*
 You are given an array of integers of size n where n being even.
 You have to calculate the number of dominate pairs (i,j) . 
 Where a pair is called dominant if ( 0<=i<n/2, n/2<=j<n, arr[i]>=5*arr[j] ) these relation are fulfilled.  
 For example  in arr=[10,3,3,1] index i=0, j=3 form a dominating pair

Note : 0 based indexing is used  and n is even 
*/

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        int count=0;
        sort(arr.begin(), arr.begin()+(n/2));
        sort(arr.begin()+(n/2), arr.end());

        int j=n/2;
        for(int i=0; i<n/2; i++)
        {
            while(j<n && arr[i]>=arr[j]*5)
            {
                j++;
            }
        count+=j-n/2;
        }
    return count;
    }  
};
