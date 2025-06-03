#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

// traversing using recursion
int Traversing(Node *temp){
    // base condition
    if(temp == NULL){
        return 0;
    }
    cout<<temp->data<<" ";
    Traversing(temp->next);
}

int main()
{
    Node *head = NULL;
    int arr[] = {2,3,45,67,89};

    // inserting

    // front
    // Node *temp = new Node;
    // temp->data = 50;
    // temp->next = NULL;
    // head = temp;

    // using loop
    for(int i = 0; i<5; i++){
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    // traversing

    // cout<<head->next->data<<" "<<head->next;
    Node *display = head;

    while (display)
    {
       cout<<display->data<<" ";
       display = display->next;
    }
    cout<<endl;

    // end
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    Node *end = new Node;
    end->data = 50;
    end->next = NULL;
    ptr->next = end;

    
    
    // traversing after inserting at end
    Node *visible = head ;
    while (visible)
    {
        cout<<visible->data<<" ";
        visible = visible->next;
    }

    // traversing using recursion
    cout<<endl;
    Traversing(head);
    


    
  return 0;
}