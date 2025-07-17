#include<iostream>
#include<queue>
#include<stack>
using namespace std;
/*
1. first store first k element to stack
2. calculate size of remaining queue(size)
3. store stack element to queue
4. push size of element to queue again
*/

void Reverse(queue<int>&q, int k){
    stack<int>temp;
    while (k--)
    {
        temp.push(q.front());
        q.pop();
    }

    int size = q.size(); // size of remainig q
    while (!temp.empty())
    {
        q.push(temp.top());
        temp.pop();
    }

    // push remainig element of queue
    while (size--)
    {
        q.push(q.front());
        q.pop();
    }
    
}

void PrintQueue(queue<int>&q1){
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\nverify "<<q1.front()<<endl;
}

int main()
{
    queue<int>q1;
    q1.push(5);
    q1.push(10);
    q1.push(15);
    q1.push(21);
    //PrintQueue(q1);
    Reverse(q1,2);
    PrintQueue(q1);
  return 0;
}