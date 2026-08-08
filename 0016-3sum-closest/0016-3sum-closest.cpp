class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int difference;
        int distance = INT_MAX;
        int ans;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (k > j) {

                int total = nums[i] + nums[j] + nums[k];
                difference = abs(target - total);

                if (distance > difference) {
                    distance = difference;
                    ans = total;
                }

                if (ans == target) {
                    return ans;
                }

                else if (target < total) {
                    k--;
                }

                else {
                    j++;
                }
            }
        }

        return ans;
    }
};