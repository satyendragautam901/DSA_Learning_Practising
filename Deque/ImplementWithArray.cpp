#include <iostream>
#include <vector>
using namespace std;
/*
Deque : it is a special type of queue in which push and pop are possible from both end.
push_front() - push element to front
push_back() - push element to back
same for pop_back and pop_front().

*/
class Deque
{
private:
  int *arr;
  int front;
  int rear;
  int size;

public:
  // i am using circular array so deque functionality, otherwise we have space but we can't push

  Deque(int n)
  {
    arr = new int[n]; // create array in which insertion and deletion happen
    front = rear = -1;
    size = n;
    cout << "Deque initialise with size of " << size << endl;
  }

  bool IsEmpty()
  {
    return front == -1;
  }
  bool IsFull()
  {
    return (rear + 1) % size == front;
  }

  void push_front(int x)
  {
    if (IsEmpty())
    { // if arr is empty, then it is easy
      front = rear = 0;
      arr[0] = x;
      cout << arr[front] << " Pushed front of deque " << endl;
      return;
    }
    else if (IsFull())
    { // if array is full
      cout << "Deque overflow " << endl;
      return;
    }
    else
    { // if already some element is there.
      front = (front - 1 + size) % size;
      arr[front] = x;
      cout << arr[front] << " Pushed front of deque " << endl;
      return;
    }
  }

  void push_back(int x)
  { // push back

    if (IsEmpty())
    { // if arr is empty, then it is easy
      front = rear = 0;
      arr[0] = x;
      cout << arr[front] << " Pushed back of deque " << endl;
      return;
    }
    else if (IsFull())
    { // if array is full
      cout << "Deque overflow " << endl;
      return;
    }
    else
    {
      rear = (rear + 1) % size; // be careful here
      arr[rear] = x;
      cout << arr[rear] << " pushed back of deque " << endl;
      return;
    }
  }

  // pop
  void pop_front()
  {
    // if empty
    if (IsEmpty())
    {
      cout << "Underflow " << endl;
      return;
    }
    cout << arr[front] << " popped from front of deque " << endl;

    if (front == rear) // if only one element
    {
      front = rear = -1;
    }
    else
    {
      front = (front + 1) % size;
    }
  }
  void pop_back()
  {
    // if empty
    if (IsEmpty())
    {
      cout << "Underflow " << endl;
      return;
    }
    cout << arr[rear] << " popped from back" << endl;
    if (front == rear)
    {
      front = rear = -1;
    }
    else
    {
      rear = (rear - 1 + size) % size;
    }
  }

  // top of element
  int top()
  {
    if (IsEmpty())
    {
      return -1;
    }
    else
    {
      return arr[front];
    }
  }

  // back of element
  int back()
  {
    if (IsEmpty())
    {
      return -1;
    }
    else
    {
      return arr[rear];
    }
  }

  ~Deque()
  {
    delete[] arr;
    cout << "Deque destoryed " << endl;
  }
};
int main()
{
  Deque d(5);
  d.push_back(5);
  d.push_back(50);
  d.push_front(10);
  d.push_back(500);
  d.push_front(100);

  cout << "top element is " << d.top() << endl;
  cout << "back element is " << d.back() << endl;
  return 0;
}