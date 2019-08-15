class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int temp,j=A.size()-1;
        for(int i=0;i<j;i++){
            if(A[i]%2==1){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                j--;
                i--;
            }else{
                continue;
            }
        }
        
        return A;
    }
};