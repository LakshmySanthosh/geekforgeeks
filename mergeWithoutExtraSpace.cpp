/*
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M 
elements.
*/

void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
             int i=0;
             int j=0;
             int k = n-1;
             while(i<n && j<m){
                 if(arr1[i]>arr2[j]){
                     long long x = arr1[k];
                     arr1[k]=arr2[j];
                     k--;
                     arr2[j]=x;
                     j++;
                 }
                 else{
                     i++;
                     
                 }
             }
             sort(arr1,arr1+n);
             sort(arr2,arr2+m);
             return;
        }
