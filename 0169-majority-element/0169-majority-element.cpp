class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k = 1;
        int m = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 1; i < m; i++) {
            if(nums[i] == nums[i-1]) {
                k++;
            } else {
                k = 1;
            }

            if(k > m/2) {
                return nums[i];
            }
        }

        return nums[0];  
    }
};