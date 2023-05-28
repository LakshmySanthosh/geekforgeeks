/*
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
*/

int getNthFromLast(Node *head, int n)
{
        int count=0;
        Node *ptr=head;
        while(ptr)
        {
            count++;
            ptr=ptr->next;
        }
        if(count<n)
            return -1;
        count=count-n+1;
        
        ptr=head;
        for(int i=1;i<count;i++)
        {
            ptr=ptr->next;
        }
        return ptr->data;
}
