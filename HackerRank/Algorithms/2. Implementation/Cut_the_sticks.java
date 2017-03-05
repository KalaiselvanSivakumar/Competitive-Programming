import java.util.Scanner;
import java.util.Arrays;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int length = scan.nextInt();
        int[] arr = new int[length];
        for(int i = 0; i < length; ++i) {
            arr[i] = scan.nextInt();
        }
        scan.close();

        Arrays.sort(arr);
        for(int i = 0; i < length;) {
            int min = arr[i];
            for(int j = i; j < length; ++j) {
                arr[j] -= min;
            }
            System.out.println(length-i);
            for(; i < length && arr[i] <= 0; ++i);
        }
    }
}
