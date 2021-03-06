// Daily Coding Problems: 53 - Medium

import java.util.LinkedList;
import java.util.Queue;

class MyStack {

	private Queue<Integer> queue1, queue2;
	private int size;

	/** Initialize your data structure here. */
	public MyStack() {
		queue1 = new LinkedList<>();
		queue2 = new LinkedList<>();
		size = 0;
	}

	/** Push element x onto stack. */
	public void push(int x) {
		queue2.add(x);
		++size;
		while (!queue1.isEmpty()) {
			queue2.add(queue1.remove());
		}
		Queue<Integer> temp = queue1;
		queue1 = queue2;
		queue2 = temp;
	}

	/** Removes the element on top of the stack and returns that element. */
	public int pop() {
		if (size == 0) {
			return -1;
		}
		--size;
		return queue1.remove();
	}

	/** Get the top element. */
	public int top() {
		if (size == 0) {
			return -1;
		}
		return queue1.peek();
	}

	/** Returns whether the stack is empty. */
	public boolean empty() {
		return queue1.isEmpty();
	}
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */