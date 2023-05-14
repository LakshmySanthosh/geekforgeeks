/*
Given an array A of size N. 
Find the maximum subset-sum of elements that you can make from the given array such that for every two consecutive elements in the array, 
at least one of the elements is present in our subset. 
*/

vector<int> prev(2),next(2);
        prev[0] =0;
        prev[1] =A[0];
        
        for(int i=1; i<N; i++){
            next[0] = prev[1];
            next[1] = max(prev[0],prev[1])+ A[i];
            prev = next;
        }
      
    return max(prev[0],prev[1]);
