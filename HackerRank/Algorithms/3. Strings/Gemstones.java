import java.util.Scanner;

public class Solution {

    static int gemstones(String[] arr){
        // Complete this function
        boolean[] commonChars, temp;
        int result = 0;
        int i, j, charValue, length;
        commonChars = new boolean[26];
        length = arr[0].length();
        for (i = 0; i < length; i++) {
            commonChars[arr[0].charAt(i) - 97] = true;
        }
        for (j = 1; j < arr.length; j++) {
            temp = new boolean[26];
            length = arr[j].length();
            for (i = 0; i < length; i++) {
                charValue = arr[j].charAt(i) - 97;
                if (commonChars[charValue]) {
                    temp[charValue] = true;
                }
            }
            commonChars = temp;
        }
        for (i = 0; i < 26; i++) {
            if (commonChars[i]) {
                result++;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] arr = new String[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.next();
        }
        in.close();
        int result = gemstones(arr);
        System.out.println(result);
    }
}
