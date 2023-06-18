/*
N people from 1 to N are standing in the queue at a movie ticket counter. 
It is a weird counter, as it distributes tickets to the first K people and then the last K people and again first K people and so on, 
once a person gets a ticket moves out of the queue. 
The task is to find the last person to get the ticket.
*/

class Solution {
  public:
    int distributeTicket(int N, int K) {
        deque<int> ticket;
        int count=0;
        for(int i=1;i<=N;i++)
        {
            ticket.push_back(i);
        }
        while(ticket.size()>1)
        {
            if((count/K)%2==0)
            {
                ticket.pop_front();
            }
            else
            {
                ticket.pop_back();
            }
            count++;
        }
        return ticket.front();
    }
};
