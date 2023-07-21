/*
Given an array arr[] containing N integers. 
In one step, any element of the array can either be increased or decreased by one. 
Find minimum steps required such that the product of the array elements becomes 1.
*/

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        int count=0,pos=0,neg=0,zer=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<=-1)
            {
                count+=-(arr[i]+1);
                neg+=1;
            }
            else if(arr[i]>=1)
            {
                count+=(arr[i]-1);
                pos+=1;
            }
            else
            {
                count+=1;
                zer+=1;
            }
        }
        if(neg%2!=0 && zer==0)
            count+=2;
        return count;
    }
};
