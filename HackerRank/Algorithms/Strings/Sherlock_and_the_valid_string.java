import java.util.Scanner;
import java.util.HashMap;

public class Solution {

    static String isValid(String s){
        // Complete this function
        int[] alphabetCount = new int[26];
        int length = s.length();
        for (int i = 0; i < length; i++) {
            alphabetCount[s.charAt(i) - 97]++;
        }
        int first = -1, second = -1;
        HashMap<Integer, Integer> countMatch = new HashMap<>();
        for (int i = 0; i < 26; i++) {
            if (alphabetCount[i] != 0) {
                if (countMatch.containsKey(alphabetCount[i])) {
                    countMatch.put(alphabetCount[i], countMatch.get(alphabetCount[i]) + 1);
                }
                else {
                    if (countMatch.size() > 2) {
                        return "NO";
                    }
                    countMatch.put(alphabetCount[i], 1);
                }
                if (first == -1) {
                    first = alphabetCount[i];
                }
                else if (second == -1 && first != alphabetCount[i]) {
                    second = alphabetCount[i];
                }
            }
        }
        if (second == -1 || ((first == 1 && countMatch.get(first) == 1) || (second == 1 && countMatch.get(second) == 1))) {
            return "YES";
        }
        if ((((first > second  ? first - second : second - first) == 1)) && (countMatch.get(first) == 1 || countMatch.get(second) == 1)) {
            return "YES";
        }
        return "NO";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        in.close();
        String result = isValid(s);
        System.out.println(result);
    }
}
