/*
Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

Note: Return 1, if there is at least one triplet following the condition else return 0.
*/

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        
        for(int i=n-1;i>1;i--){
            int left=0;
            int right=i-1;
            while(left<right){
                int sum=arr[left]+arr[right]+arr[i];
                if(sum==0) return 1;
                else if(sum>0) right--;
                else left++;
                
            }
        }
        return 0;
    }
};
