class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int l=A.size();
        vector<int> a;
        vector<int> b;
        int k=0,m=0;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){
                a.push_back(A[i]);
            }else{
                b.push_back(A[i]);
            }
        }
        A.clear();
        for(int j=0;j<l;j++){
            if(j%2==1){
                A.push_back(b[k]);
                k+=1;
            }else{
                A.push_back(a[m]);
                m+=1;
            }
        }
        
        
    return A;}
};