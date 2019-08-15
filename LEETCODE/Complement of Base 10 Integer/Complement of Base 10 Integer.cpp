class Solution {
public:
    int bitwiseComplement(int N) {
        string s="",x="";
       long int rem,sum=0;
        if(N==0){
            return 1;
        }
        while(N!=0){
            rem=N%2;
            N=N/2;
            s=to_string(rem)+s;
        }
        for(int i=s.size()-1;i>=0;i--){
             if(s[i]=='1'){
                 continue;
             }else{
                 sum=sum+pow(2,(s.size()-1)-i);
             }
            
        }
      // int n=pow(2,3);
       // cout<<sum<<"  "<<s;
        
        
        
  return sum;  }
};