import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        int n;
        int[][] matrix;
        int sum;
        int max;
        while (q != 0) {
            n = scan.nextInt();
            matrix = new int[2*n][2*n];
            for(int i = 0; i < 2*n; ++i) {
                for(int j = 0; j < 2*n; ++j) {
                    matrix[i][j] = scan.nextInt();
                }
            }
            sum = 0;
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < n; ++j) {
                    max = matrix[i][j];
                    if (max < matrix[2*n-i-1][j]) {
                        max = matrix[2*n-i-1][j];
                    }
                    if (max < matrix[2*n-i-1][2*n-j-1]) {
                        max = matrix[2*n-i-1][2*n-j-1];
                    }
                    if (max < matrix[i][2*n-j-1]) {
                        max = matrix[i][2*n-j-1];
                    }
                    sum += max;
                }
            }
            System.out.println(sum);
            --q;
        }
        scan.close();
    }
}
