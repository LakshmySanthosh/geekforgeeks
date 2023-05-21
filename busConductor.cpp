/*
You are conductor of a bus .There are n chairs and n passengers in the bus. You are given an array chairs of length n, where chairs[i] is the position of the ith chair. 
You are also given the array passengers of length n, where passengers[j] is the position of the jth passenger.

You may perform the following move any number of times:

Increase or decrease the position of the ith passenger by 1 (i.e., moving the ith passenger from position x to x + 1 or x - 1)
Return the minimum number of moves required to move each passenger to a chair such that no two passengers are in the same chair and every passenger gets a chair.

Note that there may be multiple chairs or passengers in the same position at the beginning.
*/

class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        int moves=0;
        for(int i=0; i<n; i++)
        {
            moves+=abs(chairs[i]-passengers[i]);
        }
        return moves;
    }
};
