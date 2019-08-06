class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx;
        int key;
        //sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++)
        {
            key=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if (key==nums[j])
                {
                idx.push_back(i);
                idx.push_back(j);
                return idx;
                }
                
             }
            
     }
        return idx;
    }
};