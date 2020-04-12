class Solution {
	public int jump(int[] nums) {
		int length = nums.length;
		int[] jumps = new int[length];
		int i, j, value;
		for (i = 0; i < length; ++i) {
			value = nums[i];
			for (j = i + 1; j < length && j <= value + i; ++j) {
				if (jumps[j] == 0 || jumps[j] > jumps[i] + 1) {
					jumps[j] = jumps[i] + 1;
				}
			}
		}
		return jumps[length - 1];
	}
}
