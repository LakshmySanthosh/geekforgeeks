/*
Given n ranges of the form [p, q] which denotes all the numbers in the range [p, p + 1, p + 2,...q].  
Given another integer q denoting the number of queries. 
The task is to return the kth smallest element for each query (assume k>1) after combining all the ranges.
In case the kth smallest element doesn't exist return -1
*/

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        vector<int> arr;
        vector<int> ans;
        sort(range.begin(), range.end());
        for(int i=0;i<n;i++)
        {
            for(int j=range[i][0];j<=range[i][1];j++)
            {
                 
                else if(i>0)
                {
                    if(arr[arr.size()-1]<j)
                        arr.push_back(j);
                    else
                        continue;
                }
            }
        }
        
        
        for(int i=0;i<q;i++)
        {
            if(queries[i]<=arr.size())
                ans.push_back(arr[queries[i]-1]);
            else 
                ans.push_back(-1);
        }

        return ans;
    } 
};
