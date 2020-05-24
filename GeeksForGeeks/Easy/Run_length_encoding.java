// Daily Coding Problems: 29 - Easy

class GfG {

	String encode(String str) {
		String encodedString = "";
		int i = 0;
		while (i < str.length()) {
			int currentCharIndex = i;
			char currentChar = str.charAt(i);
			while (i < str.length() && currentChar == str.charAt(i)) {
				++i;
			}
			encodedString += "" + currentChar + (i - currentCharIndex);
		}
		return encodedString;
	}

}
