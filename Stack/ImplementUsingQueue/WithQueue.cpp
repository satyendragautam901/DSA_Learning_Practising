#include<iostream>
#include<queue>
using namespace std;

/*
implement stack using queue , use two queue here both may be for push and pop
push: push in the queue which already have some element if both queue is empty then you can push anyone of them
pop : for pop you need to shift all the element except the last one , and last element will pop.
*/
class Stack{
    public:
        queue<int>q1;
        queue<int>q2;

        bool empty(){
            return q1.empty() && q2.empty();
        }

        void push(int x){
            if(empty()){ // if empty then you can push anyone of them
                q1.push(x); // let's suppose i push in first queue
            }
            else if(q1.empty()){ // if q1 is empty then push to q2.
                q2.push(x);
            }
            else{ // if q2 is empty then push to q1.
                q1.push(x);
            }
        }

        int pop(){
            if(empty()){ // if both queue is empty then no element.
                return 0;
            }
            else if(q1.empty()){ // if q1 is empty, means q2 have some element. so push n-1 element to q1.

                while (q2.size()>1) // left one element that need to pop
                {
                    q1.push(q2.front());
                    q2.pop();
                }
                
                int element = q2.front();
                q2.pop();
                return element;
            }
            else{ // if q2 is empty means q1 have some element.

                while (q1.size()>1) // left one element that need to pop
                {
                    q2.push(q1.front());
                    q1.pop();
                }
                
                int element = q1.front();
                q1.pop();
                return element;
            }
        }

        int peek(){
            if(empty()){
                return 0;
            }
            else if(q1.empty()){
                return q2.back();
            }
            else{
                return q1.back();
            }
        }
};

int main()
{
    Stack s1;
    s1.push(5);
   // s1.push(10);
    cout<<s1.peek();
  return 0;
}