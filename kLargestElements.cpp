/*
Given an array Arr of N positive integers and an integer K, find K largest elements from the array.  
The output elements should be printed in decreasing order.
*/

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	     vector<int> ans;
	     sort(arr,arr+n);
	     for(int i=n-1;i>=0;i--)
	     {
	         if(k)
	         {
	            ans.push_back(arr[i]);
	            k--;
	         }
	     }
	     return ans;
	}

};
