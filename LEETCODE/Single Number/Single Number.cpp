class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int i;
    sort(nums.begin(),nums.end());
         
    for (i=0;i<nums.size();i=i+2){
        if(i==nums.size()-1){
            return nums[i];
        }
        else if(nums[i]==nums[i+1] ){
            continue;
        }else{
            return nums[i];
        }
    }
         
        
        
        
    return nums[i];}
    
};