/*
Imagine an imaginary array of length N containing balls. 
Given 2 arrays color and radius of length N each, where color[i] represents the color of the ith ball while radius[i] represents the radius of ith ball. 
If two consecutive balls have the same color and size, both are removed from the array. 
Geek wants to know the length of the final imaginary array.
*/

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<int> sta;
        for(int i=0;i<N;i++)
        {
            if(!sta.empty() &&
            color[i] == color[sta.top()] &&
            radius[i] == radius[sta.top()])
            {
                sta.pop();
            }
            else
            {
                sta.push(i);
            }
        }
        return sta.size();
    }
};
