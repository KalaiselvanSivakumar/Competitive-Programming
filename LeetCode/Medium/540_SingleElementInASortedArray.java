public class Solution {
	public int singleNonDuplicate(int[] nums) {
		int left = 0, right = nums.length - 1, mid;
		while (left < right) {
			boolean moveLeft = false;
			mid = (left / 2) + (right / 2);
			if (mid % 2 != 0) {
				if (nums[mid] == nums[mid - 1]) {
					moveLeft = true;
				}
			}
			else {
				if (nums[mid] == nums[mid + 1]) {
					moveLeft = true;
				}
			}
			if (moveLeft) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}
		return nums[left];
	}
}
