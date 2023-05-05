/*
You are given a root node of a binary Tree and each node of the binary tree is assigned a value and 
you are also given an integer k and you have to return the count of Good subtrees of this binary Tree . 
Good subtree is a subtree such that the number of distinct values in this subtree is less than or equal to k.
Note: Subtree of a node consists of that node and all nodes of the subtrees of left and right child  of that node  if they exist .
*/

class Solution{
public:
    int dfs(Node*& root,int k,int &cntSubtrees){
        if(!root) return 0;
        int lMask = dfs(root->left,k,cntSubtrees);
        int rMask = dfs(root->right,k,cntSubtrees);
        int cMask = lMask | rMask | (1<<root->data);
        int bitCnt = __builtin_popcount(cMask);
        if(bitCnt <= k) cntSubtrees++;
        return cMask;
    }

    int goodSubtrees(Node *root,int k){
        if(!root) return 0;
        int cntSubtrees = 0;
        dfs(root,k,cntSubtrees);
        return cntSubtrees;
    }
};
