/*
Given three stacks S1, S2 & S3 of size N1, N2 & N3 respectively, having only Positive Integers. 
The task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed. 
Stacks are represented as an array, and the first index of the array represents the top element of the stack.
*/

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int i=0,j=0,k=0;
        int sum1=0,sum2=0,sum3=0;
        
            sum1=accumulate(S1.begin(),S1.end(),sum1);
            sum2=accumulate(S2.begin(),S2.end(),sum2);
            sum3=accumulate(S3.begin(),S3.end(),sum3);
            
        while(i<N1 and j<N2 and k<N3){
            
            if(sum1==sum2 and sum2==sum3){
                return sum1;
            }
            
            else if(sum1<=sum2 and sum1<=sum3){
                if(sum1<sum2){
                    sum2-=S2[j];
                    j++;
                }
                if(sum1<sum3){
                    sum3-=S3[k];
                    k++;
                }
            }
            
            else if(sum2<=sum1 and sum2<=sum3){
                if(sum2<sum1){
                    sum1-=S1[i];
                    i++;
                }
                if(sum2<sum3){
                    sum3-=S3[k];
                    k++;
                }
            }
            
            else{
                if(sum3<sum1){
                    sum1-=S1[i];
                    i++;
                }
                if(sum3<sum2){
                    sum2-=S2[j];
                    j++;
                }
            }
            
        }
        return 0;
    }
};
