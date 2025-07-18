#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);

        // Rotate the queue to bring the new element to front
        int size = q.size();
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int top = q.front();
        q.pop();
        return top;
    }

    int peek() {
        if (q.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
