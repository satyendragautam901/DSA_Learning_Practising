#include<iostream>
using namespace std;
class Stack{
    private: // data member
        int *ar;
        int size;
        int top; 
        bool empty;
    
    public:
        Stack(int s){ // constructor

            size = s; // initialize size 

            ar = new int[s]; // create dynamic arra

            top = -1; // initialy top point

            empty = 1; // means initially it is empty . 0 means non empty
            
            cout<<"Stack is created using array "<<endl;
        }

        // push operation
        void Push(int value){
            if(top == size -1){ // if stack is full
                cout<<"Stack overflow "<<endl;
                return;
            }
            else{
                top++;
                ar[top] = value;
                cout<<value<<" pushed to stack "<<endl;
                empty = 0; // now stack is not empty
            }
        }

        // pop operation
        void Pop(){
            if(top == -1){ // if stack is already empty
                cout<<"Stack underflow "<<endl;
                return;

            }
            else{
                top--;
                cout<<ar[top+1]<<" popped from stack "<<endl;

                if(top == -1){
                    empty = 1; // if empty stack then make flag as empty
                    cout<<"Stack is now empty "<<endl;
                }
                return;
            }
        }

        // top value
        int Top(){
            if(top == -1){
                cout<<"Stack is empty, right now ! "<<endl;
                
            }
            else{
                cout<<"Top value is "<<ar[top]<<endl;
                
            }
        }

        // size of stack
        int SizeOfStack(){
            if(top == -1){
                cout<<"Currently size if 0 "<<endl;
                
            }
            else{
                cout<<"Size of this stack is "<<top+1<<endl;
            }
        }

        // check stack is empty or not
        bool IsEmpty(){
            if(empty){
                cout<<"stack is Empty "<<endl;
                
            }
            else{
                cout<<"Stack is not empty "<<endl;

            }
        }

    ~Stack() { // destructor
    delete[] ar;
    cout << "Stack memory freed\n";
}
};
int main()
{
    Stack s1(10);
    s1.Push(5);
    s1.Push(50);
    s1.Push(15);
    
    s1.Pop(); // popped 15
    s1.Top();
    s1.SizeOfStack();

    s1.IsEmpty();
  return 0;
}