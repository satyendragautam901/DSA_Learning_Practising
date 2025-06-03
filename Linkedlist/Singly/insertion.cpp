#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};

int main()
{
    // inserting at front

    // first node
    Node *head = new Node;
    head->data = 50;
    head->next = NULL;

    // second node
    Node *p = new Node;
    p->data = 450;
    p->next = head;
   
    head = p;

    // third node
    Node * third = new Node;
    third->data = 30;
    third->next = head;
    head = third;

    /*
    // inserting multiple nodes using for loop
    int arr[] {50,60,48,90,100};

    for(int i = 0; i<5;i++){
        Node *inserting = new Node;
        inserting->data = arr[i];
        inserting->next = head;
        head = inserting;

    }
    */
    /*
    // inserting at end
    Node *inser_end = new Node;
    inser_end->data = 10;
    inser_end->next = NULL;

    // tail pointer
    Node *tail = new Node;

    tail = head;
    while (tail->next !=NULL)
    {
       tail = tail->next;
    }

    tail->next = inser_end;
    */

    // insert at location 2
    Node *at_location = head;
    int location = 2;
    for(int i = 1; i<1; i++){
        at_location = at_location->next;
    }

    Node *fourth = new Node;
    fourth->data = 89;
    fourth->next = at_location->next;
    at_location->next = fourth;

    
    // traverse
    Node *temp = head;  
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
  return 0;
}