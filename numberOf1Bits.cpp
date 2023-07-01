/*
Given a positive integer N, print count of set bits in it. 
*/

  public:
    int setBits(int N) {
        int count=0;
        while(N)
        {
            if(N%2==1)
            {
                count++;
            }
            N/=2;
        }
        return count;
    }
};
