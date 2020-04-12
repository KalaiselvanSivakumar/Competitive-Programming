import java.util.LinkedList;

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

class MinStack {

	LinkedList<Long> stack;
	long minValue = 0;

	public MinStack() {
		stack = new LinkedList<>();
	}

	public void push(int x) {
		if (stack.isEmpty()) {
			minValue = x;
		}
		if (x >= minValue) {
			stack.addFirst((long) x);
		}
		else {
			long newValue = 2 * (long) x - minValue;
			minValue = x;
			stack.addFirst(newValue);
		}
	}

	public void pop() {
		long value = stack.getFirst();
		if (value < minValue) {
			minValue = 2 * minValue - value;
		}
		stack.removeFirst();
	}

	public int top() {
		long value = stack.getFirst();
		return (value < minValue) ? (int) minValue : (int) value;
	}

	public int getMin() {
		return (int) minValue;
	}

}
