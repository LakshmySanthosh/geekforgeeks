/*
Given a number in its binary form find if the given binary number is a multiple of 3. 
It is recommended to finish the task using one traversal of input binary number.
*/

class Solution{
public:	
		
	int isDivisible(string s){
        int cnt = 0 ;
        int n = s.size() ;
        int index = 0 ;
        for( int i = n-1 ; i >= 0 ; i-- )
        {
            if( s[i] == '1' )
            {
                if(index%2==0) cnt += 1 ;
                else cnt += 2 ;
            }
            index++ ;
        }
        return cnt%3 == 0;
	}

};
