/*
There are N rooms in a straight line in Geekland State University's hostel, you are given a binary string S of length N where S[i] = '1' represents 
that there is a wifi in ith room or S[i] = '0' represents no wifi. Each wifi has range X i.e. if there is a wifi in ith room then its range will go 
upto X more rooms on its left as well as right. You have to find whether students in all rooms can use wifi.
*/

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        int count=X;
        // if (S=='0')
        //     return 0;
        for(int i=0;i<N;i++)
        {
            if(S[i]=='0')
            {
                count++;
                if(count>(2*X))
                    return 0;
            }
            else 
            {
                count=0;
            }
        }
        if (count>X)
            return 0;
        else
            return 1;
    }
};
