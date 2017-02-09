import java.util.Scanner;

//Java 8

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        //Variables declaration and Reading inputs from console
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] arr = new int[size];
        for(int i = 0; i < size; ++i) {
            arr[i] = scan.nextInt();
        }
        scan.close();

        //Logic Part


        //Displaying output
        for(int i = size-1; i >= 0; --i) {
            System.out.print(arr[i] + " ");
        }
    }
}
