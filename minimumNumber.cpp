/*
You are given an array arr of n elements. 
In one operation you can pick two indices i and j, such that arr[i] >= arr[j] and replace the value of arr[i] with (arr[i] - arr[j]). 
You have to minimize the values of the array after performing any number of such operations.
*/

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int ans=arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            // __gcd is predefined function to find greatest common divisor
            ans=__gcd(ans, arr[i]);
        }
        return ans;
    }
};
