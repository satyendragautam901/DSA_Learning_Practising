#include<iostream>
using namespace std;
class twoStacks {
  public:
    int arr[100];
    int first; // this is the pointer helps during inserting
    int last; // this is ponter from last end

    twoStacks() {
       
        first = -1; // initialise 
        last = 100; // initialise with last index +1
        
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(first+1 != last){ // base condition
            first++; // first move forward
            arr[first] = x;
        }
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        
        // code here
        if(last-1 != first){ // base condition
            last--; // last also move 
            arr[last] = x;
        }
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        if(first == -1){
            return -1;
        }
        else{
            int element = arr[first];
            first--;
            return element;
        }
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(last == 100){
            return -1;
        }
        else{
            int element = arr[last];
            last++;
            return element;
        }
    }
};
int main()
{
    twoStacks t1;
    t1.push1(5);
    t1.push1(10);
    cout<<t1.pop1()<<endl;

    t1.push2(2);
    t1.push2(44);
    cout<<t1.pop2();
  return 0;
}