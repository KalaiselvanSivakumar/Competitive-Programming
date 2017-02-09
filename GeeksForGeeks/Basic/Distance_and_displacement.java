import java.util.Scanner;
import java.lang.Math;

class GFG {

    public static void findPosition(int[] arr, int n, String direction) {
        int[] point = {0, 0};
        int distance = 0;
        for(int i = 0; i < n; ++i) {
            distance += arr[i];
            switch (direction.charAt(i)) {
                case 'N': point[1] += arr[i];
                          break;
                case 'S': point[1] -= arr[i];
                          break;
                case 'E': point[0] += arr[i];
                          break;
                case 'W': point[0] -= arr[i];
                          break;
            }
        }
        distance += Math.ceil(Math.sqrt(point[0] * point[0]
                                    + point[1] * point[1]));
        System.out.println(distance);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCase = scan.nextInt();
        int m;
        int[] arr;
        String str;
        while (testCase != 0) {
            m = scan.nextInt();
            arr = new int[m];
            for(int i = 0; i < m; ++i) {
                arr[i] = scan.nextInt();
            }
            scan.nextLine();
            str = scan.nextLine();
            findPosition(arr, m, str);
            testCase--;
        }
        scan.close();
    }

}
