#include<iostream>
#include<stack>
using namespace std;

/*
Stacks work with LIFO, while queues work with FIFO.
To simulate FIFO behavior using stacks, we use two stacks:
- st1 for push operations (input)
- st2 for pop/peek operations (output)
*/



class Queue{
    // Queue implemented using two stacks:
    // st1 (input stack), st2 (output stack)

    private:
        stack<int>st1; // push
        stack<int>st2; // pop
    public:
    Queue(){
        cout<<"Default constructor "<<endl;
    }

    bool IsEmpty(){ // empty only when both stack is empty.

        return st1.empty() && st2.empty();
    }

    void push(int x){ // while push don't worry 
        st1.push(x);
    }

    int pop(){
        if(IsEmpty()){ // if both stack is empty means no element .
            return 0;
        }
        else if(!st2.empty()){ // if st2(poppable stack have element then directly pop)

            int element = st2.top();
            st2.pop();
            return element;
        }
        else{ // if stack2 is empty but in stack1 there is still element then 
            
            // copy element from stack1 to stack2 then pop from stack2
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            int element = st2.top();
            st2.pop();
            return element;
        }

    }

    int peek(){ // return top of element from queue. top points to element that will pop first wheather it stack or queue

        if(IsEmpty()){ // if no element 
            return 0;
        }

        else if(!st2.empty()){ // if stack2 is non emepty then definetly top is present here
            return st2.top();
        }
        else{ // st2 is empty but element is still in stack1.
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }

    }

    ~Queue(){ // here no dynamic memory allocation so no need any logic inside function. when object deleted memory freed.
        cout<<"Queue destoroyed "<<endl;
        
    }

};
int main()
{
    Queue q1;
    q1.push(5);
    q1.push(10);
    q1.push(15);
    q1.push(21);
    cout << "Peek: " << q1.peek() << endl;
    cout << "Pop: " << q1.pop() << endl;
    cout << "Peek after pop: " << q1.peek() << endl;


  return 0;
}