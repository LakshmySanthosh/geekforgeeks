/*
There are N bags with diamonds in them. The i'th of these bags contains A[i] diamonds. 
If you drop a bag with A[i] diamonds, it changes to A[i]/2 diamonds and you gain A[i] diamonds. 
Dropping a bag takes 1 minute. Find the maximum number of diamonds that you can take if you are given K minutes.
*/

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        long long x,sum=0;
        priority_queue<long long> pq;
        for(int i=0;i<N;i++)
        {
            pq.push(A[i]);
        }
        for(int i=0;i<K;i++)
        {
            x=pq.top();
            sum+=x;
            pq.pop();
            pq.push(x/2);
        }
        return sum;
    }
};
