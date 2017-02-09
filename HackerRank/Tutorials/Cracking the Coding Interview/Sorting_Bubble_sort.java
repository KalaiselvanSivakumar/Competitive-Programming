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
        int totalSwaps = 0, numberOfSwaps;
        for(int i = 0; i < size; ++i) {
            numberOfSwaps = 0;
            for(int j = 0; j < size-1; ++j) {
                if (arr[j] > arr[j+1]) {
                    totalSwaps++;
                    numberOfSwaps++;
                    arr[j] ^= arr[j+1];
                    arr[j+1] ^= arr[j];
                    arr[j] ^= arr[j+1];
                }
            }
            if (numberOfSwaps == 0) {
                break;
            }
        }
        System.out.println("Array is sorted in " + totalSwaps + " swaps.");
        System.out.println("First Element: " + arr[0]);
        System.out.println("Last Element: " + arr[size-1]);
    }
}
