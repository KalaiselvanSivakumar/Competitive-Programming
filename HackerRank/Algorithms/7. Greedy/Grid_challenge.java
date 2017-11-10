import java.util.Scanner;
import java.util.Arrays;

public class Solution {

    public static boolean isResultAchieved(char[][] grid, int gridSize) {
        int i, j;
        for (i = 0; i < gridSize; i++) {
            for (j = 0; j < gridSize - 1; j++) {
                // System.out.println(grid[j][i] + " " + grid[j + 1][i] + " " + (grid[j][i] > grid[j + 1][i]));
                if (grid[j][i] > grid[j + 1][i]) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int testCase, gridSize, index;
        char[][] matrix;
        String inputLine;
        Scanner in = new Scanner(System.in);
        testCase = in.nextInt();
        while (testCase-- != 0) {
            gridSize = in.nextInt();
            in.nextLine();
            matrix = new char[gridSize][gridSize];
            for (index = 0; index < gridSize; index++) {
                inputLine = in.nextLine();
                Arrays.sort(matrix[index] = inputLine.toCharArray());
            }
            System.out.println(isResultAchieved(matrix, gridSize) ? "YES" : "NO");
        }
        in.close();
    }
}
