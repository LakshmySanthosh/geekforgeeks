/*
You are given an array A of N integers and an integer K, and your task is to find the total number of cuts that you can make such that 
for each cut these two conditions are satisfied
1. A cut divides an array into two parts equal or unequal length (non-zero).
2. Sum of the largest element in the left part and the smallest element in the right part is greater than or equal to K.
*/

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        
        //initializing min and max
        int min_A=INT_MAX;
        int max_A=INT_MIN;
        int count=0;
        
        //creating 2 arrays gre and sma
        vector<int> gre(N);
        vector<int> sma(N);
        
        //creating two arrays and storing max and min values in gre and sma arrays
        for(int i=0;i<N;i++)
        {
            min_A=min(min_A,A[N-i-1]);
            max_A=max(max_A,A[i]);
            
            gre[i]=max_A;
            sma[N-i-1]=min_A;
        } 
        
        for(int i=1;i<N;i++)
        {
            if((gre[i-1]+sma[i])>=K)
                count++;
        }
        return count;
    }
};
