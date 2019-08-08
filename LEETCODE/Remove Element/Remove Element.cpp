class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp, j;
        j=nums.size()-1;
        for (int i=0;i<=j;i++){
            if(nums[i]==val){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i--;
                j--;
            }
        }
        return j+1;
    }
};