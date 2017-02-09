import java.util.Scanner;
/*
// Copy segments of shifted elements to rotated array:
    System.arraycopy(arr, d, rotated, 0, n - d);
    System.arraycopy(arr, 0, rotated, n - d, d);
*/

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        in.close();
        leftRotate(a, n, k);
        printArray(a);
    }

    public static int gcd(int a, int b) {
        int temp;
        while(b > 0) {
            temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }

    public static void leftRotate(int[] a, int n, int d) {
        if (d == 0 || d == n)
            return;
        int temp, i, j, k;
        for(i = 0; i < gcd(n, d); ++i) {
            temp = a[i];
            j = i;
            while(true) {
                k = j + d;
                if (k >= n)
                    k = k - n;
                if (k == i)
                    break;
                a[j] = a[k];
                j = k;
            }
            a[j] = temp;
        }
    }

    public static void printArray(int[] a) {
        for(int i : a) {
            System.out.print(i + " ");
        }
        System.out.print("\n");
    }

}
