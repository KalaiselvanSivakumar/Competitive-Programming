import java.util.Scanner;

class GFG {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);

        int testCase = scan.nextInt();
        scan.nextLine();
        while (testCase != 0) {
            String str = scan.nextLine();

            char[] strArr = str.toCharArray();
            int i = 0, j = strArr.length - 1;
            char c;
            while (i < j) {
                c = strArr[j];
                strArr[j] = strArr[i];
                strArr[i] = c;
                ++i;
                --j;
            }

            System.out.println(String.valueOf(strArr));
            --testCase;
        }
        scan.close();
    }
}