/*
You start with an array A of size N. Initially all elements of the array A are zero. You will be given K positive integers. 
Let j be one of these integers, you have to add 1 to all A[i], where i ≥ j. Your task is to print the array A after all these K updates are done.
Note: 1-based indexing is used everywhere in this question.
*/

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        for(int j=0;j<k;j++)
            a[updates[j]-1]++;
        for(int i=1;i<n;i++)
            a[i]+=a[i-1];
    }
};
