class Solution {
	public int singleNumber(int[] nums) {
		int xorValue = 0;
		for (int i = 0; i < nums.length; ++i) {
			xorValue ^= nums[i];
		}
		return xorValue;
	}
}
