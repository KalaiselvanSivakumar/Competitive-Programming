import java.io.*;
import java.util.*;

public class Solution {

	public static void main(String[] args) {
		/*
		 * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
		 * class should be named Solution.
		 */
		Scanner scanner = new Scanner(System.in);
		int queriesCount = scanner.nextInt();
		int type, value;
		int maxValue = 0;
		Stack<Integer> stack = new Stack<>();
		while (queriesCount-- != 0) {
			type = scanner.nextInt();
			switch (type) {
				case 1:
					value = scanner.nextInt();
					if (maxValue >= value) {
						stack.push(value);
					}
					else {
						stack.push(2 * value - maxValue);
						maxValue = value;
					}
					break;
				case 2:
					value = stack.pop();
					if (maxValue < value) {
						maxValue = 2 * maxValue - value;
					}
					break;
				case 3:
					System.out.println(maxValue);
					break;
			}
		}
		scanner.close();
	}
}