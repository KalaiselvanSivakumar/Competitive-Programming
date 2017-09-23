/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


queue<long long int> rev(queue<long long int> q)
{
    //This method uses temporary queue. Runtime is O(n^2);
    //If we push all the elements one by one to stack and push it back to result queue, it takes only O(2n) => O(n)
    queue<long long int> resultantQueue;
    stack<long long int> tempStack;
    while (!q.empty()) {
      tempStack.push(q.front());
      q.pop();
    }

    while (!tempStack.empty()) {
      resultantQueue.push(tempStack.top());
      tempStack.pop();
    }

    return resultantQueue;
}
