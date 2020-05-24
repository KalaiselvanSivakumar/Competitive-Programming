// Daily Coding Problems: 27 - Easy

import java.util.Stack;

class Solution {

	public boolean isValid(String s) {
		Stack<Character> parentheses = new Stack<>();
		for (Character bracket : s.toCharArray()) {
			if (bracket == '(' || bracket == '[' || bracket == '{') {
				parentheses.push(bracket);
			}
			else {
				if (parentheses.isEmpty()) {
					return false;
				}
				char openBracket = parentheses.pop();
				if ((openBracket == '(' && bracket != ')')
					|| (openBracket == '[' && bracket != ']')
					|| (openBracket == '{' && bracket != '}')) {
						return false;
				}
			}
		}
		return parentheses.isEmpty();
	}

}
