class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            for(int k = i+1; k < n; k++) {
                
                if(nums[i] + nums[k] == target) {
                    return {i, k};
                }
            }
        }
        
        return {};  
    }
};