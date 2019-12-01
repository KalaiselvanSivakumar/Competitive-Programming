class Solution {
    public int numJewelsInStones(String J, String S) {
        Set<Character> jewelsSet = new HashSet<>();
        char[] jewelsArray = J.toCharArray();
        for (Character jewel: jewelsArray) {
            jewelsSet.add(jewel);
        }
        int totalJewels = 0;
        for (int i = 0; i < S.length(); ++i) {
            if (jewelsSet.contains(S.charAt(i))) {
                ++totalJewels;
            }
        }
        return totalJewels;
    }
}
