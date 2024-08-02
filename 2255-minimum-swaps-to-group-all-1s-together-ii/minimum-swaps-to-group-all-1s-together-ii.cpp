class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int countOfOnes = count(nums.begin(), nums.end(), 1);
        int n = nums.size();
        return min(solve(nums, n, 0, n - countOfOnes), solve(nums, n, 1, countOfOnes));
    }

private:
    int solve(vector<int>& nums, int n, int g, int windowSize) {
        if (windowSize == 0) return 0;
        int swaps = 0;
        for (int i = 0; i < windowSize; i++) {
            if (nums[i] != g) swaps++;
        }
        int minSwaps = swaps;
        for (int i = windowSize; i < n; i++) {
            if (nums[i - windowSize] != g) swaps--;
            if (nums[i] != g) swaps++;
            minSwaps = min(minSwaps, swaps);
        }
        return minSwaps;
    }
};