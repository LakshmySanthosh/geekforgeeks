/*
Given an array of strings arr[] of size n, a string str and an integer k. 
The task is to find the count of strings in arr[] whose prefix of length k matches with the k-length prefix of str.
*/

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        int count=0;
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<k;j++)
            {
                if(str[j]!=arr[i][j])
                    flag=1;
            }
            if(flag==0)
                count++;
        }
        return count;
    }
};
