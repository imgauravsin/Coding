class Solution {
public:
    
    int intvalue(char a){
        if(a=='I'){
            return 1;
        }else if(a=='V'){
            return 5;
        }
        else if(a=='X'){
            return 10;
        }
        else if(a=='L'){
            return 50;
        }
        else if(a=='C'){
            return 100;
        }
        else if(a=='D'){
            return 500;
        }
        else if(a=='M'){
            return 1000;

        }
        return 0;

    }
    
    int romanToInt(string s) {
        
        int sum=0;
        
        for (int i=0;i<s.size();i++){
            if(intvalue(s[i])<intvalue(s[i+1]))
                sum=sum-intvalue(s[i]);
            else
                sum+=intvalue(s[i]);
        }
        
        return sum;
    }
};