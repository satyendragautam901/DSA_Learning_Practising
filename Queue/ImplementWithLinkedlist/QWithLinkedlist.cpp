#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
        cout << "Queue initialise " << endl;
    }

    bool IsEmpty()
    {
        return front == nullptr;
    }

    void Push(int x)
    {
        if (IsEmpty())
        {
            front = rear = new Node(x);
            cout << x << " Pushed onto queue " << endl;
        }
        else
        {
            Node *temp = new Node(x);
            if (temp == nullptr)
            { // this case mostly not happen.
                cout << "Queue Overflow " << endl;
                return;
            }
            else
            {
                rear->next = temp;
                rear = temp;
                cout << x << " Pushed onto queue " << endl;
            }
        }
    }

    void Pop()
    {
        if (IsEmpty())
        {
            cout << "Queue Underflow " << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                cout << front->data << " popped from queue " << endl;
                front = rear = nullptr;
                return;
            }
            else
            {
                Node *temp = front;
                cout << front->data << " popped from queue " << endl;
                front = front->next;
                delete temp;
            }
        }
    }

    int top()
    {
        if (IsEmpty())
        {
            return -1;
        }
        else
        {
            return front->data;
        }
    }
    ~Queue()
    {
        while (!IsEmpty())
        {
            Pop(); //  deletes all nodes
        }
        cout << "Queue destroyed" << endl;
    }
};

int main()
{
    Queue q1;
    q1.Push(10);
    q1.Push(5);
    q1.Pop();
    cout << "top " << q1.top() << endl;
    return 0;
}