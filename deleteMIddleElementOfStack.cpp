/*
Given a stack, delete the middle element of the stack without using any additional data structure.
Middle element:- ceil((size_of_stack+1)/2) (1-based indexing) from bottom of the stack.
*/

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> st;
        int mid= sizeOfStack/2;
        
        int i=1;
        
        while(i<=mid+1 && !s.empty())
        {
            if(i==mid+1)
                s.pop();
            else
            {
                st.push(s.top());
                s.pop();
            }
            i++;
        }
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
    }
};
