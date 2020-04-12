import java.util.Arrays;

public class Solution {
	public int lastStoneWeight(int[] stones) {
		Arrays.sort(stones);
		int j = stones.length - 1;
		int i = j - 1;
		while (j > 0) {
			if (stones[i] == stones[j]) {
				i -= 2;
				j -= 2;
			}
			else {
				int remainingWeight = stones[j] - stones[i];
				insertRemainingWeight(stones, remainingWeight, i);
				--j;
				--i;
			}
		}
		if (j == 0) {
			return stones[0];
		}
		return 0;
	}

	public void insertRemainingWeight(int[] stones, int remainingWeight, int size) {
		int i;
		for (i = size - 1; i >= 0; --i) {
			if (stones[i] <= remainingWeight) {
				break;
			}
			stones[i + 1] = stones[i];
		}
		stones[i + 1] = remainingWeight;
	}
}
