class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        double sum=0.0;
        vector<int> c;
        for(int i=0;i<m;i++){
            c.push_back(nums1[i]);
            
        }
         for(int j=0;j<n;j++){
            c.push_back(nums2[j]);
            
        }
         sort(c.begin(),c.end());
        for(int j=0;j<n+m;j++){
            cout<<c[j];
            
        }
        if((m+n)%2==1){
            return c[(m+n)/2];
        }
        else{
            sum=c[(m+n)/2]+c[(m+n)/2-1];
            return sum/2;
        }
         
            
      }
         
};