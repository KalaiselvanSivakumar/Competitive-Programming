// Daily Coding Problems: 21 - Easy

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		int testCase = scan.nextInt();
		while (testCase != 0) {
			int trainsCount = scan.nextInt();
			int[] arrivalTimes = new int[trainsCount];
			int[] departureTimes = new int[trainsCount];
			for (int i = 0; i < trainsCount; ++i) {
				arrivalTimes[i] = scan.nextInt();
			}
			for (int i = 0; i < trainsCount; ++i) {
				departureTimes[i] = scan.nextInt();
			}
			Arrays.sort(arrivalTimes);
			Arrays.sort(departureTimes);

			int startIndex = 0;
			int endIndex = 0;
			int currentActivePlatforms = 0;
			int maxPlatformsNeeded = 0;
			while (startIndex < trainsCount) {
				int time = arrivalTimes[startIndex];
				++currentActivePlatforms;
				while (departureTimes[endIndex] < time) {
					--currentActivePlatforms;
					++endIndex;;
				}
				if (currentActivePlatforms > maxPlatformsNeeded) {
					maxPlatformsNeeded = currentActivePlatforms;
				}
				++startIndex;
			}
			System.out.println(maxPlatformsNeeded);
			--testCase;
		}
	}
}
