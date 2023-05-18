/*
Given a binary matrix mat[][] of dimensions NxM such that 1 denotes land and 0 denotes water. Find the number of closed islands in the given matrix.

Note: A closed island is a group of 1s surrounded by only 0s on all the boundaries (except diagonals). 
In simple words, a closed island is an island whose none of the 1s lie on the edges of the matrix.
*/

class Solution {
    public:
    void dfs(vector<vector<int>>& matrix,int i,int j,int N,int M){
        matrix[i][j]=0;
        int dx[4]={0,0,-1,1};   //R L U D
        int dy[4]={1,-1,0,0};
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            if(x>=0 &&  x<N  &&  y>=0  && y<M && matrix[x][y]==1){
                dfs(matrix,x,y,N,M);
            }
            
        }
        
        
    }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(matrix[i][j]==1){
                    if(j*i==0 || i==N-1 || j==M-1 )
                    {
                        dfs(matrix,i,j,N,M);
                    }
                }
            }
        }
     int   cnt=0;
     
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(matrix[i][j]==1)
                {
                   cnt++;
                   dfs(matrix,i,j,N,M);
                }
                }
            }
         
        return cnt;
    }
};
