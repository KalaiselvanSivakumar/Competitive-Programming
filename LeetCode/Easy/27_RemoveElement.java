class Solution {
	public int removeElement(int[] nums, int val) {
		int left = 0,
			right = nums.length - 1;
		while (left <= right) {
			while (left <= right && right > -1 && nums[right] == val) {
				--right;
			}
			while (left <= right && nums[left] != val) {
				++left;
			}
			if (left < right) {
				nums[left] = nums[right];
				--right;
			}
		}
		return left;
	}
}
