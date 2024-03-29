/*
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. 
If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).
*/

class Solution
{
    public:
     struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node*next,*prev=NULL;
        node* curr=head;
        int count=0;
        while(curr && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(head)
        {
            head->next= reverse(curr,k);
        }
        return prev;
    }
};
