/*
Given an array arr[] of n positive integers. 
The task is to find the maximum of j - i subjected to the constraint of arr[i] <= arr[j].
*/

int maxIndexDiff(int arr[], int n) {
        stack<int> stk;
        for(int i=n-1; i>=0; i--){
            if(stk.empty()) stk.push(i);
            else if(arr[i]>arr[stk.top()]) stk.push(i);
        }
        
        int ans=0;
        for(int i=0; i<n; i++){
            while(!stk.empty() && arr[i] <= arr[stk.top()]){
                ans = max(ans, stk.top()-i);
                stk.pop();
            }
        }
        return ans;
