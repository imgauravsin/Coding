class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s,i;
    for(i=0;i<nums.size();i++){
        if(target<=nums[i]){
            s=i;
            break;
        }
    }
    if(i==nums.size())
   // cout<<s;    
    { return nums.size();}
    else{
        return s;
    }
    }
};