#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
    

    Node(int value){
       data = value;
       next = nullptr; 
    }
};



class Stack{
    private:
        Node *top;
        int size;

    public:
        Stack(){ // here no need to initialise size because linkedlist is lenearly growing.
            top = nullptr;
            size = 0;
            cout<<"Stack is created and initialise "<<endl;
        }

        // push operation . This follow reverse linkedlist in reverse order
        void Push(int value){
            Node *temp = new Node(value); // create a temporary node
            
            if(temp == nullptr){ // if heap is full then it unable to create a node
                cout<<"Stack overflow "<<endl;
                return;
            }

            else{
                temp->next = top;
                top = temp;
                size++;
                cout<<value<<" pushed onto stack "<<endl;
                return;
            }
        }

        void pop(){ // pop operation
            if(top == nullptr){
                cout<<"Stack underflow "<<endl;
                return;
            }
            else{
                cout<<top->data<<" is popped from stack "<<endl;
                Node *temp = top;
                top = top->next;
                size--;
                delete temp;
                return;
            }
        }

        // return top value
        void TopValue(){
            if(top == nullptr){
                cout<<"Stack is empty right now "<<endl;
                return;
            }
            else{
                cout<<"Top data is "<<top->data<<endl;
                return;
            }
        
        }

        // size
        void GetSize(){
            cout<<"size of stack is "<<size<<endl;
            return;
        }

        // check stack is empty or not
        bool IsEmpty() const {
            return top == nullptr;
        }


    ~Stack() { // destructor
    while (top != nullptr) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    cout << "Stack memory freed\n";
}


};

int main()
{
    Stack s1;
    
    s1.Push(5); // push 5
    s1.Push(50); // push 50

    s1.TopValue(); // peek/top value
    s1.pop(); // pop
    s1.pop(); // pop
    s1.pop(); // pop

    s1.GetSize();

    // check if stack is empty or not
    cout << (s1.IsEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
  return 0;
}