class Solution {
public:
    int reverse(int x)
    {
       long int rev=0,rem;
        while(x!=0)    
        {    
            rem=x%10;      
            rev=rev*10+rem;    
            x/=10;    
        }
        if (rev>2147483647 || rev<-2147483648){
            return 0;}
        else
        { return rev;}
    }
        
    
};