/*
Given a string, S.The string can contain small case English letters or '?'. You can replace '?' with any small English letter. 
Now if it is possible to make the string S a palindrome after replacing all '?' then find the palindromic string with a minimum ascii sum
of the absolute difference of adjacent characters. Otherwise, return -1.
*/

class Solution {
  public:
    int minimumSum(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            if(s[left]=='?' && s[right]=='?'){
                if(left!=0)
                    s[left] = s[left-1];
                if(right!=n-1)
                    s[right] = s[right+1];
            }
            else if(s[left]=='?'){
                s[left] = s[right];
            }
            else if(s[right]=='?'){
                s[right] = s[left];
            }
            else if(s[left] != s[right]){
                return -1;
            }
            left++;
            right--;
        }
        int count =0;
        for(int i=1;i<n;i++){
            if(s[i]!='?' && s[i-1]!='?')
            count+=abs(s[i]-s[i-1]);
        }
        return count;
    }
};
