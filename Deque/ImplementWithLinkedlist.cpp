#include <iostream>
using namespace std;
/*
Deque - push and pop from both end.
for implement deque with linkedlist we use doubly linkedlist so that it would be easy for push and pop operation.
*/

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int value)
  {
    data = value;
    prev = nullptr;
    next = nullptr;
  }
};
class Deque
{
private:
  Node *front;
  Node *rear;

public:
  Deque()
  {
    front = nullptr;
    rear = nullptr;
  }

  // check about empty
  bool IsEmpty()
  {
    return front == nullptr;
  }

  // full condition is rearely arrive

  // push_front
  void push_front(int x)
  {

    if (IsEmpty())
    { // if empty

      front = rear = new Node(x);
      cout << front->data << " pushed front of deque " << endl;
      return;
    }

    else
    { // if already have some element

      Node *temp = new Node(x); // create a temporary node

      if (temp == nullptr)
      {
        cout << "Deque overflow ! " << endl;
        return;
      }
      else
      {
        temp->next = front;
        front->prev = temp;
        front = temp;
        cout << front->data << " pushed front of deque " << endl;
        return;
      }
    }
  }

  // push back

  void push_back(int x)
  {
    if (IsEmpty())
    { // if empty

      front = rear = new Node(x);
      cout << front->data << " pushed back of deque " << endl;
      return;
    }

    else
    { // if already have some element

      Node *temp = new Node(x); // create a temporary node

      if (temp == nullptr)
      {
        cout << "Deque overflow ! " << endl;
        return;
      }
      else
      {
        temp->prev = rear;
        rear->next = temp;
        rear = temp;
        cout << rear->data << " pushed back of deque " << endl;
        return;
      }
    }
  }

  // pop

  void pop_front()
  { // pop front side
    if (IsEmpty())
    {
      cout << "Deque underflow " << endl;
      return;
    }
    else
    {
      Node *temp = front;
      cout << temp->data << " popped from front " << endl;

      front = front->next;
      delete temp;

      if (front == nullptr)
      { // means single node
        rear = nullptr;
      }
      else
      {
        front->prev = nullptr;
      }
    }
  }
  void pop_back()
  { // pop back side
    if (IsEmpty())
    {
      cout << "Deque underflow " << endl;
      return;
    }
    else
    {
      Node *temp = rear;
      cout << temp->data << " popped from back " << endl;

      rear = rear->prev;
      delete temp;

      if (rear == nullptr)
      { // means single node
        front = nullptr;
      }
      else
      {
        rear->next = nullptr;
      }
    }
  }

  int get_front()
  { // get top of element
    if (IsEmpty())
    {
      return -1;
    }
    else
    {
      return front->data;
    }
  }

  int get_back()
  { // get back of element
    if (IsEmpty())
    {
      return -1;
    }
    else
    {
      return rear->data;
    }
  }

  void display()
  {
    Node *temp = front;
    while (temp)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }

  ~Deque()
  {
    while (!IsEmpty())
    {
      pop_front();
    }
    cout << "Deque destroyed " << endl;
  }
};
int main()
{
  Deque dq;
  dq.push_front(10);
  dq.push_back(20);
  dq.push_front(5);
  dq.display();                                // Expected: 5 10 20
  dq.pop_back();                               // Removes 20
  dq.pop_front();                              // Removes 5
  dq.display();                                // Expected: 10
  cout << "Front: " << dq.get_front() << endl; // 10
  cout << "Back: " << dq.get_back() << endl;   // 10
  dq.pop_back();                               // deque becomes empty
  dq.pop_front();                              // underflow
  return 0;
}
