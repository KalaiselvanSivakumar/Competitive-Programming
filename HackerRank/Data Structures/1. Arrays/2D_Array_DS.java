import java.util.Scanner;

//Java 8

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        //Variables declaration and Reading inputs from console
        Scanner scan = new Scanner(System.in);
        int sum, maxSum = -65;
        int[][] arr = new int[6][6];
        for(int i = 0; i < 6; ++i) {
            for(int j = 0; j < 6; ++j) {
                arr[i][j] = scan.nextInt();
            }
        }
        scan.close();

        //Logic Part
        for(int i = 0; i < 4; ++i) {
            for(int j = 0; j < 4; ++j) {
                sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                        + arr[i+1][j+1]
                        + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
                if(maxSum < sum)
                    maxSum = sum;
            }
        }

        //Displaying output
        System.out.print(maxSum);

    }
}
