/*
Given two linked lists, your task is to complete the function makeUnion(), that returns the union list of two linked lists. 
This union list should include all the distinct elements only and it should be sorted in ascending order.
*/

class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        Node *start=new Node(-1);
        Node *ptr=start;
        set<int>distinct;
        while(head1)
        {
            distinct.insert(head1->data);
            head1=head1->next;
        }
        while(head2)
        {
            distinct.insert(head2->data);
            head2=head2->next;
        }
        for(auto i:distinct)
        {
            Node *temp=new Node(i);
            ptr->next=temp;
            ptr=temp;
        }
        return start->next;
    }
};
