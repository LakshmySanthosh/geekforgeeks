/*
You are given an array arr of size n, containing the values in between 1 to n & time of size n, containing time in sec, 
you are asked to determine the total time taken in order to pick all the array elements from left to right but there is 
a condition, If from left, previous elements are different it takes 1 Sec to pick & if element got repeated then it will 
take time[arr[i]].
*/

int totaltime=0;
        set<int>mp;
        mp.insert(arr[0]);
        for(int i=1;i<n;i++)
        {
          if(mp.find(arr[i])!=mp.end())
          
          {
              totaltime+=time[arr[i]-1];
          }
          else
          {
              totaltime+=1;
          }
          mp.insert(arr[i]);
        }
        return totaltime;
