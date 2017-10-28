import java.util.Scanner;
import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scanner;
        int n, m;
        int[] A, B;
        int i;

        scanner = new Scanner(System.in);
        n = scanner.nextInt();
        A = new int[n];
        for (i = 0; i < n; i++) {
            A[i] = scanner.nextInt();
        }
        m = scanner.nextInt();
        B = new int[m];
        for (i = 0; i < m; i++) {
            B[i] = scanner.nextInt();
        }

        scanner.close();

        HashMap<Integer, Integer> arrACount = new HashMap<>();
        HashMap<Integer, Integer> arrBCount = new HashMap<>();
        for (i = 0; i < m; i++) {
            if (arrBCount.containsKey(B[i])) {
                arrBCount.put(B[i], arrBCount.get(B[i]) + 1);
            }
            else {
                arrBCount.put(B[i], 1);
            }
        }
        for (i = 0; i < n; i++) {
            if (arrACount.containsKey(A[i])) {
                arrACount.put(A[i], arrACount.get(A[i]) + 1);
            }
            else {
                arrACount.put(A[i], 1);
            }
        }

        List<Integer> missingNumbers = new ArrayList<>();
        for (Integer key : arrBCount.keySet()) {
            if (!arrACount.containsKey(key) || arrACount.get(key) < arrBCount.get(key)) {
                missingNumbers.add(key);
            }
        }
        Collections.sort(missingNumbers);

        for (Integer num : missingNumbers) {
            System.out.print(num + " ");
        }
    }
}
