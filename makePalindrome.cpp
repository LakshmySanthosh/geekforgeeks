/*
You are given an array of strings arr of size n. 
You have to find out if it is possible to make a palindromic string by concatenating the strings in any order. 
Provided that all the strings given in the array are of equal length.
*/

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        //creating an unordered set with all elements of array arr, this will give all distinct elements of arr
        unordered_set<string> st(arr.begin(),arr.end());
        
        int pairs=0;
        
        for(string temp : st)
        {
            //here, we reverse every string in the set st and check if we can find the reverse in the set
            //increment pairs is reverse is present
            reverse(temp.begin(),temp.end());
            if(st.find(temp)!=st.end())
                pairs++;
        }
        //return YES if pairs==n and NO otherwise
        return(pairs==n);
    }
};
