class Solution {
public:
    int hammingDistance(int x, int y) {
        int s=x^y;
        int rem,count=0;
        //cout<<s<<endl;
        while(s!=0){
            rem=s%2;
            s=s/2;
            if(rem==1){
                count+=1;
            }
        }
        //cout<<count;
        return count;
        
    }
};