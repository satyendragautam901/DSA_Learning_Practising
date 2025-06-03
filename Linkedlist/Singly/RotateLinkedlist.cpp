#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};

Node *CreateLinkedlist(int arr[], int size){
    // reverse order
    Node *head = NULL;
    for(int i = 0; i<size; i++){
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }

    return head;
}

// traverse 
void TraverseLinkedlist(Node *head){
    while (head)
    {
       cout<<head->data<<" ";
       head = head->next;
    }
    
}

// reverse linkedlist
Node* RotateLinkdelist(Node* head, int k) {
    // starting edge cases
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }

    // first count the nodes 
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    // number of rounds to rotate
    k = k % count;

    if(k == 0){
        return head;
    }

    // to reach at that node from starting
    count -=k;

    Node *current = head;
    Node *previous = NULL;
    while (count--)
    {
       previous = current;
       current = current->next;
    }
    // first list is here
    previous->next = NULL;
    
    // here second list start
    // now rotating 
    Node *tail = current;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    tail->next = head;
    head = current;
    return head;
    
}


int main()
{
    // insert first
    int arr[] = {5,6,7,8,9,4,1};

    // create 
    Node *head = CreateLinkedlist(arr, 7);

    head = RotateLinkdelist(head,3);
    // traverse
    TraverseLinkedlist(head);
  return 0;
}