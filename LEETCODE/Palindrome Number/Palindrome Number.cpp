class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0,rem,n;
        n=x;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        
        }
        if (rev==n && n>=0)
        {return true;}
        else
        { return false;}
    }
};