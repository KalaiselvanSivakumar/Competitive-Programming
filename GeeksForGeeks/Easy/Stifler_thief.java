// Daily Coding Problems: 9 - Hard (Includes negative numbers and 0) - GFG problem is only for positive integers.

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		int testCase;
		Scanner scan = new Scanner(System.in);
		testCase = scan.nextInt();
		while (testCase != 0) {
			int housesCount;
			housesCount = scan.nextInt();
			int i;
			int[] houses = new int[housesCount];
			for (i = 0; i < housesCount; ++i) {
				houses[i] = scan.nextInt();
			}
			int includePrev = Integer.MIN_VALUE;
			int excludePrev = Integer.MIN_VALUE;
			for (i = 0; i < housesCount; ++i) {
				if (excludePrev == Integer.MIN_VALUE) {
					excludePrev = houses[i];
				}
				else if (excludePrev + houses[i] > excludePrev) {
					excludePrev += houses[i];
				}
				if (excludePrev < houses[i]) {
					excludePrev = houses[i];
				}
				if (excludePrev < includePrev) {
					excludePrev = includePrev;
				}
				// Swap two numbers
				excludePrev ^= includePrev;
				includePrev ^= excludePrev;
				excludePrev ^= includePrev;
			}
			System.out.println(Math.max(includePrev, excludePrev));
			--testCase;
		}
	}
}

/**
 *	Input:
	7
	6
	5 5 10 100 10 5
	3
	1 2 3
	3
	1 5 6
	4
	5 6 1 5
	4
	5 1 1 5
	5
	5 1 -3 5 9
	4
	-5 -3 -1 -7

	Ouput:
	110
	4
	7
	11
	10
	14
	-1
 */
