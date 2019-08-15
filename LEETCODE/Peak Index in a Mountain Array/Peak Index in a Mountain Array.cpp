class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int max=A[0];
        for(int i=1;i<A.size();i++){
            if(max<A[i]){
                max=A[i];
            }else{
                return i-1;
            }
        }
        
     return 1;   
    }
};