import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; ++i) {
            arr[i] = scan.nextInt();
        }
        scan.close();
        int positive = 0, negative = 0, zero = 0;
        for(int i = 0; i < n; ++i) {
            if (arr[i] > 0) {
                positive++;
            }
            else if (arr[i] < 0) {
                negative++;
            }
            else {
                zero++;
            }
        }
        System.out.printf("%.6f\n", positive/(float)(n));
        System.out.printf("%.6f\n", negative/(float)(n));
        System.out.printf("%.6f\n", zero/(float)(n));
    }
}
