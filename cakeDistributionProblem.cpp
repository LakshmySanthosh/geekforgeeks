/*
Geek is organizing a birthday party, so his friends brought a cake for him. 
The cake consists of N chunks, whose individual sweetness is represented by the sweetness array. 
Now at the time of distribution, Geek cuts the cake into K + 1 pieces to distribute among his K friends. 
One piece he took for himself. Each piece consists of some consecutive chunks. He is very kind, so he left the piece with minimum sweetness for him.

You need to find the maximum sweetness that the Geek can get if he distributes the cake optimally.
*/

class Solution{
    public:
    int maxSweetness(vector<int>& sweetness, int N, int K) {
        
        //initializing left as 1 and right as sum of all elements of sweetness array
        int left=1;
        int right=accumulate(sweetness.begin(),sweetness.end(),0);
        

        while(left<right)
        {
            int current=0,pieces=0;
            int mid=(left+right+1)/2;
            
            //loop to calculate the number of pieces that can be made if we are making pieces of size greater than or equal to mid
            for(int s : sweetness)
            {
                current+=s;
                if(current>=mid)
                {
                    pieces++;
                    current=0;
                }
            }
            
            //if number of pieces are less than or equal to K, right value decreses
            if(pieces<=K)
                right=mid-1;
            
            //if number of pieces are greater than K, right value increases
            else
                left=mid;
        }
        return left;
    }
};
