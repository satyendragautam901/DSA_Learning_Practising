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


Node* InsertAtLast(int ar[], int size) {
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < size; i++) {
        Node *temp = new Node(ar[i]);

        if (head == NULL) {
            // First node
            head = temp;
            tail = temp;
        } else {
            // Append at end
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    return head;
}



int main()
{
    // insertion
    int arr[] = {2,5,6,7,8,9,1};

    
    Node *head = InsertAtLast(arr, 7);


    // traversal
    TraverseLinkedlist(head);
  return 0;
}