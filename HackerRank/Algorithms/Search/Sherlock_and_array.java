import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long leftSum = 0, rightSum = 0;
        int size;
        int[] arr;
        int i;
        int testCase = scan.nextInt();
        while (testCase != 0) {
          size = scan.nextInt();
          arr = new int[size];
          //Getting input and finding rightSum
          leftSum = 0;
          rightSum = 0;
          for (i = 0; i < size; ++i) {
            arr[i] = scan.nextInt();
            rightSum += arr[i];
          }
          rightSum -= arr[0];

          boolean flag = false;
          if (leftSum == rightSum) {
            flag = true;
          }
          else {
              for (i = 1; i < size; ++i) {
                leftSum += arr[i-1];
                rightSum -= arr[i];
                if (leftSum == rightSum) {
                  flag = true;
                  break;
                }
              }
          }
          if (flag) {
            System.out.println("YES");
          }
          else {
            System.out.println("NO");
          }
          --testCase;
        }
        scan.close();
    }
}
