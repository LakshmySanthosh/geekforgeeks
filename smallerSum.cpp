/*
You are given an array arr of n integers. 
For each index i, you have to find the sum of all integers present in the array with a value less than arr[i].
*/

class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long> sumArr;
        vector<int> arrCopy = arr;
        //creating a map to map array elements to sum
        unordered_map<int, long long>map;
        
        long long sum=0;
        //sorting copy array 
        sort(arrCopy.begin(),arrCopy.end());
        
        map[arrCopy[0]]=0;
        for(int i=1;i<n;i++)
        {
            sum+=arrCopy[i-1];
            if(arrCopy[i]==arrCopy[i-1])
                map[arrCopy[i]]=map[arrCopy[i-1]];
            else
                map[arrCopy[i]]=sum;
        }
        
        for(int i=0;i<n;i++)
        {
            sumArr.push_back(map[arr[i]]); 
        }
        return sumArr;
    }
};
