/*
There is a rectangular path for a Train to travel consisting of n rows and m columns. 
The train will start from one of the grid's cells and it will be given a command in the form of string s consisting of characters L, R, D, U. Find if it is possible to travel the train inside the grid only.
Note:
If the train is at position (i,j)
on taking 'L' it goes to (i,j-1),
on taking 'R' it goes to (i,j+1),
on taking 'D' it goes to (i-1,j),
on taking 'U' it goes to (i+1,j).
*/

class Solution {
public:
    int isPossible(int n, int m, const string& s) {
        int x=0,y=0, maxx=0,minx=0,maxy=0,miny=0;
        for(auto c: s){
            if(c=='L') x--;
            else if(c=='R') x++;
            else if(c=='U') y++;
            else if(c=='D') y--;
            
            maxx=max(maxx,x);
            maxy=max(maxy,y);
            minx=min(minx,x);
            miny=min(miny,y);
        }
        if( (maxx-minx)<m  && (maxy-miny)<n) return 1;
        
        return 0;
    }
};
