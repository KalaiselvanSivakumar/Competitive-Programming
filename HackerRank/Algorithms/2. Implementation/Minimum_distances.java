import java.util.Scanner;
import java.lang.Math;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int A[] = new int[n];
        for(int A_i=0; A_i < n; A_i++){
            A[A_i] = in.nextInt();
        }

        int i, j, minimum = Integer.MAX_VALUE;
        for(i = 0; i < n; i++) {
          for(j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
              minimum = Math.min(minimum, Math.abs(i - j));
            }
          }
        }

        if (minimum == Integer.MAX_VALUE) {
          System.out.println(-1);
        } else {
          System.out.println(minimum);
        }
    }
}
