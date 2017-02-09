import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here.
           Read input from STDIN.
           Print output to STDOUT.
           Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] arr = new int[size];
        for(int i = 0; i < size; ++i) {
            arr[i] = scan.nextInt();
        }
        scan.close();
        long result = 0;
        for(int i = 0; i < size; ++i) {
            result += arr[i];
        }
        System.out.println(result);
    }
}
