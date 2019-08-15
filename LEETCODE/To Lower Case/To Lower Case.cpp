class Solution {
public:
    string toLowerCase(string str) {
      int a;
        for(int i=0;i<str.size();i++){
            if(int(str[i])>64 && int(str[i]<=90)){
                a=0;
                a=int(str[i])+32;
                str[i]=char(a);
            }
        } 
       // cout<<str;
        return str;
        
    }
};