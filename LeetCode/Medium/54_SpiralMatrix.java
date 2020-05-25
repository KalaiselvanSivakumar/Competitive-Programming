// Daily Coding Problems: 65 - Easy

import java.util.ArrayList;
import java.util.List;

class Solution {
	public List<Integer> spiralOrder(int[][] matrix) {
		List<Integer> spiralList = new ArrayList<>();
		int topRow = 0;
		int bottomRow = matrix.length - 1;
		if (bottomRow == -1) {
			return spiralList;
		}
		int leftColumn = 0;
		int rightColumn = matrix[0].length - 1;
		int i;
		while (topRow <= bottomRow && leftColumn <= rightColumn) {
			for (i = leftColumn; i <= rightColumn; ++i) {
				spiralList.add(matrix[topRow][i]);
			}
			++topRow;
			for (i = topRow; i <= bottomRow; ++i) {
				spiralList.add(matrix[i][rightColumn]);
			}
			--rightColumn;
			if (topRow <= bottomRow) {
				for (i = rightColumn; i >= leftColumn; --i) {
					spiralList.add(matrix[bottomRow][i]);
				}
				--bottomRow;
			}
			if (leftColumn <= rightColumn) {
				for (i = bottomRow; i >= topRow; --i) {
					spiralList.add(matrix[i][leftColumn]);
				}
				++leftColumn;
			}
		}
		return spiralList;
	}
}
