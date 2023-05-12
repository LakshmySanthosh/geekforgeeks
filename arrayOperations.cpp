/*
You are given an array arr of n integers. 
You must return the minimum number of operations required to make this array 0. 
For this you can do an operation :

Choose a sub-array of non-zero elements & replace all with 0(0 must be present in arr, if not you can not replace it).
*/

class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int count=0,flag=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                flag=0;
                temp=1;
            }
            else
            {
                if(flag==0)
                {
                    count++;
                    flag=1;
                }
            }
        }
        if(temp==0)
            return -1;
        return count;
    }
};
