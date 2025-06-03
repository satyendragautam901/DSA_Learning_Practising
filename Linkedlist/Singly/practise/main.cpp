#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

// traversing
void Display(Node *temp){
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main()
{
    // create a node 
    Node *head = new Node;
    
    // insert first value to node
    head->data = 45;
    head->next = NULL;

    // second front
    Node *first = new Node;
    first->data = 56;
    first->next = head;
    head = first;

    // third back;
    Node *temp = head;
    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    Node *third = new Node;
    third->data = 1;
    third->next = NULL;
    temp->next = third;

    // insert at a location 1
    int location = 1;

    Node *loca_ = head;
    for(int i = 0; i<location; i++){
        loca_ = loca_->next;
    }

    Node *fourth = new Node;
    fourth->data = 40;
    fourth->next = loca_->next;
    loca_->next = fourth;


    cout<<"Traversing is going to run "<<endl;
    
    // traversing
    Display(head);
    
    
  return 0;
}