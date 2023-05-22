/*
You are given a tree containing N nodes in the form of an array P where Pi represents the parent of the i-th node and P0 = -1 as the tree is rooted at node 0. 
In one move, you can merge any two adjacent nodes. Calculate the minimum number of moves required to turn the tree into a star tree.

-> Merging adjacent nodes means deleting the edge between them and considering both the nodes as a single one.
-> A Star tree is a tree with a center node, and all other nodes are connected to the center node only.
*/

class Solution {
    public:
    int solve(int n, vector<int> p){
        int i,ans=n-1;
        vector<int>degree(n+1,0);
        for(i=1;i<n;i++){
            degree[p[i]]++;
            degree[i]++;
        }
        for(i=0;i<n;i++)if(degree[i]==1)ans--;
        
        if(ans<0)return 0;
        return ans;
        
    }
};
