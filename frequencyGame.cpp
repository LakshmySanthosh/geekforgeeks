/*
Given an array A of size N. 
The elements of the array consist of positive integers. 
You have to find the largest element with minimum frequency.
*/

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        int min=INT_MAX;
        for(auto i:freq)
        {
            if(i.second<=min)
                min=i.second;
        }
        map<int,int>::reverse_iterator it;
        for(it=freq.rbegin();it!=freq.rend();it++)
        {
            if(it->second==min)
                return it->first;
        }
        return -1;
        
    }
};
