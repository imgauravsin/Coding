class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ex;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ex.push_back(nums[i]);
            }
            else{
                count+=1;
            }
        }
        for(int j=0;j<count;j++){
            ex.push_back(0);
        }
        for(int i=0;i<ex.size();i++){
            nums[i]=ex[i];
        }
        
    }
};