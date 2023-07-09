/*
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
*/

int missingNumber(int arr[], int n) 
    { 
        int ans=1;
        map<int,int> myMap;
        for(int i=0; i<n; i++)
            myMap[arr[i]]++;
        for(auto i: myMap)
            if(i.first<1) continue;
            else if(i.first==ans) ans++; 
            else return ans;
        return ans;
    }
