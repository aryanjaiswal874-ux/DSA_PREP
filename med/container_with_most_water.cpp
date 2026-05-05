// Problem: Container With Most Water
// Platform: LeetCode
// Difficulty: Medium
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int n = height.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int width = j - i;
                int h = min(height[i], height[j]);
                int area = width * h;

                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};