/*
You are given an integer n, denoting the number of people who needs to be seated, and a list of m integers seats, where 0 represents a 
vacant seat and 1 represents an already occupied seat.

Find whether all n people can find a seat, provided that no two people can sit next to each other.
*/

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // if there is only 1 element seat and seat is available
        if(m==1 && seats[0]==0){
            n--;
            seats[0]=1;
        }
        
        //loop for all seats if greater than one
        for(int i=0;i<m;i++){
            // if all person sits break the loop
            if(n==0){
                break;
            }
            
            //if initial seat is free
            if(seats[i]==0){
                //if it is first seat
                if(i==0){
                    //seat after initial seat is also free
                    if(seats[i+1]==0){
                        n--;
                        seats[i]=1;
                    }
                    continue;
                }
                //if it is last seat
                if(i==m-1){
                    //if previous seat is empty
                    if(seats[i-1]==0){
                        n--;
                        seats[i]=1;
                    }
                    continue;
                }
                //if previous seat and next seat is empty
                if(seats[i-1]==0&&seats[i+1]==0){
                    n--;
                    seats[i]=1;
                }
            }
        }
        // checking if all person got seat
        if(n==0)
            return true;
        else
            return false;
    }
};
