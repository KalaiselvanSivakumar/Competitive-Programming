// Daily Coding Problems: 49 - Medium

class Solution {
    public int maxSubArray(int[] nums) {
		if (nums.length == 0) {
			return 0;
		}
		int maximumSum = nums[0];
		int currentSum = nums[0];
		for (int i = 1; i < nums.length; ++i) {
			if (currentSum + nums[i] < nums[i]) {
				currentSum = nums[i];
			}
			else {
				currentSum += nums[i];
			}
			if (maximumSum < currentSum) {
				maximumSum = currentSum;
			}
		}
		return maximumSum;
    }
}
