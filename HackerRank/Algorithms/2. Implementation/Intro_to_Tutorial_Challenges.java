import java.util.Scanner;

public class Solution {
    public static int findPositionOfValue(int[] arr, int l, int r, int value) {
      if (l > r) {
        return -1;
      }
      int mid = (l + r) / 2;
      if (arr[mid] == value) {
        return mid;
      }
      else if (arr[mid] < value) {
        return findPositionOfValue(arr, mid + 1, r, value);
      }
      else {
        return findPositionOfValue(arr, l, mid - 1, value);
      }
    }

    public static void main(String[] args) {
      /* Enter your code here.
         Read input from STDIN.
         Print output to STDOUT.
         Your class should be named Solution. */
      Scanner scan = new Scanner(System.in);
      int value, size;
      value = scan.nextInt();
      size = scan.nextInt();
      int[] arr = new int[size];
      for(int i = 0; i < size; ++i) {
        arr[i] = scan.nextInt();
      }
      scan.close();

      System.out.println(findPositionOfValue(arr, 0, size - 1, value));
    }
}
