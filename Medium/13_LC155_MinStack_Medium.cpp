/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
import java.util.Stack;
class MinStack {

    Stack<Integer> s = new Stack<>();
    Stack<Integer> minStack = new Stack<>();

    public MinStack() {

    }

    public void push(int val) {
        s.push(val);

        if (minStack.empty() || val <= minStack.peek()) {
            minStack.push(val);
        }
    }

    public void pop() {
        int removed = s.pop();

        if (removed == minStack.peek()) {
            minStack.pop();
        }
    }

    public int top() {
        return s.peek();
    }

    public int getMin() {
        return minStack.peek();
    }
}

 