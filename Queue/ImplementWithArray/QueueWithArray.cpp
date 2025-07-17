#include <iostream>
#include <vector>
using namespace std;

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
        cout << "Queue initialize with size " << size << endl;
    }

    bool IsEmpty()
    { // check queue is empty or not
        return front == -1;
    }

    bool IsFull()
    {
        return (front == (rear + 1) % size); // for cicular queue
    }

    void Push(int x)
    {
        if (front == -1)
        { // if queue is empty

            front = rear = 0;
            arr[front] = x;
            cout << arr[rear] << " Pushed to queue " << endl;
        }
        else
        { // if atleast one element in queue
            if (IsFull())
            {
                cout << "Queue Overflow !!! " << endl;
                return;
            }
            else
            {                             // if queue have space then push
                rear = (rear + 1) % size; // this will make as circular queue
                arr[rear] = x;
                cout << arr[rear] << " Pushed to queue " << endl;
            }
        }
    }

    void Pop()
    { // pop will be from front not last like stack.

        if (IsEmpty())
        { // if no element in queue then how you can pop.
            cout << "Queue Underflow !! " << endl;
            return;
        }
        else
        {
            if (front == rear)
            { // if there is only one element in queue
                cout << "Popped " << arr[front] << " from queue " << endl;
                front = rear = -1;
                return;
            }
            else
            {
                cout << "Popped " << arr[front] << " from queue " << endl;
                front = (front + 1) % size; // this will make queue as circular queue to utilise all the spaces.
                return;
            }
        }
    }

    int top()
    {
        if (IsEmpty())
            return -1;
        return arr[front];
    }

    ~Queue()
    {
        delete[] arr;
        cout << "Queue destroyed " << endl;
    }
};

int main()
{
    Queue q1(10);
    q1.Push(5);
    q1.Push(10);
    q1.Pop();
    q1.Pop();
    cout << "top " << q1.top() << endl;
    return 0;
}