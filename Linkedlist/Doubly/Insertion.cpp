#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};

void TraverseLinkedlist(Node *head){
    Node *temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

Node *Insert(Node *head){
    Node *temp = new Node(20);

    // edge cases
    if(head == NULL){
        head = temp;
        return head;
    }

    // insert node at starting
    temp->next = head;
    head = temp;

    return head;
}

Node* InsertAtLast(Node* head, int data) {
    Node* value = new Node(data);

    if (head == NULL) {
        // If list is empty, new node becomes head
        return value;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = value;
    value->prev = temp;

    return head;
}


int main()
{
    // insertion
    Node *temp = new Node(10);
    Node *head = NULL;
    head = temp;

    // insert at first
    head = Insert(head);
    head = InsertAtLast(head,30);



    // traversal
    TraverseLinkedlist(head);
  return 0;
}