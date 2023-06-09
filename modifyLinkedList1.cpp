/*
Given a singly linked list containing N nodes. Modify the Linked list as follows:

1. Modify the value of the first half nodes such that 1st node's new value is equal to the value of the last node minus the first node's current value, 2nd node's new value is equal to the second last nodes value minus 2nd nodes current value, likewise for first half nodes.
2. Replace the second half of nodes with the initial values of the first half nodes(values before modifying the nodes).
3. If N is odd then the value of the middle node remains unchanged.

*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        long long int N = 0;
        if(head==NULL || head->next == NULL)
            return head;
            
        stack<int> st;
        struct Node *temp = head;
        
        while(temp!=NULL){
            st.push(temp->data);
            temp = temp->next;
            N++;
        }
        
        temp = head;
        N /= 2;
        
        while(N--){
            temp->data = st.top() - temp->data;
            temp = temp->next;
            st.pop();
        }
        
        while(temp!=NULL){
            temp->data = st.top();
            temp = temp->next;
            st.pop();
        }
        
        return head;
    }
};
