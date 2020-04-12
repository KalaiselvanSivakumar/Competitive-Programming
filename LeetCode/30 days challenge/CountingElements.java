import java.util.Map;
import java.util.HashMap;

class Solution {
	public int countElements(int[] arr) {
		Map<Integer, Integer> elementsCount = new HashMap<>();
		int i;
		for (i = 0; i < arr.length; ++i) {
			int key = arr[i];
			if (elementsCount.containsKey(key)) {
				elementsCount.put(key, elementsCount.get(key) + 1);
			}
			else {
				elementsCount.put(key, 1);
			}
		}

		int resultCount = 0;
		int currentKeyCount, nextKeyCount;
		for(Integer key : elementsCount.keySet()) {
			if (elementsCount.containsKey(key + 1)) {
				resultCount += elementsCount.get(key);
			}
		}
		return resultCount;
	}
}
