/*
Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
*/

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<matrix[0].size();j++)
                {
                    ans.push_back(matrix[i][j]);
                }
            }
            else
            {
                for(int j=matrix[0].size()-1;j>=0;j--)
                {
                    ans.push_back(matrix[i][j]);
                }

            }
        }
        return ans;
    }
};
