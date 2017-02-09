import java.util.Scanner;
import java.lang.Math;

public class Solution {

    public static int calculateDiagonalDifference(int[][] m, int n) {
        int left = 0, right = 0;
        int i = 0;
        while (i < n) {
            left += m[i][i];
            right += m[i][n-i-1];
            ++i;
        }
        return Math.abs(left-right);
    }

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[][] matrix = new int[N][N];
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                matrix[i][j] = scan.nextInt();
            }
        }
        scan.close();
        System.out.println(calculateDiagonalDifference(matrix, N));
    }
}
