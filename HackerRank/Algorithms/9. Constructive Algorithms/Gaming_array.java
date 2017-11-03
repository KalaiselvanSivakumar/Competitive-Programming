import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int g = in.nextInt();
        int i;
        for(int a0 = 0; a0 < g; a0++){
            int n = in.nextInt();
            int[] arr = new int[n];
            for(i = 0; i < n; i++) {
                arr[i] = in.nextInt();
                if (i != 0 && arr[i - 1] > arr[i]) {
                    arr[i] = arr[i - 1];
                }
            }
            i = n - 1;
            int j;
            boolean bobTurn = true, bobMoved = false;
            while (i >= 0) {
                j = i - 1;
                while (j >= 0 && arr[i] == arr[j]) {
                    j--;
                }
                i = j;
                bobTurn = !bobTurn;
                bobMoved = !bobMoved;
            }
            System.out.println((bobTurn == false && bobMoved == true) ? "BOB" : "ANDY");
        }
    }
}
