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
    Node *tail = NULL;
    for(int i = 0; i<size; i++){
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        
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

Node *MergeTwoList(Node *head1, Node *head2){
    // create a dummy node for simplicity
    Node *dummy = new Node;
    dummy->data = 0;
    dummy->next = NULL;

    // head is currently points to dummy node
    Node *head = dummy;
    Node *tail = dummy;

    // jab tak head1 or head2 exist krta ho
    while (head1 && head2)
    {
       if(head1->data <= head2->data){
        Node *temp = new Node;
        Node *next = head1->next;

        temp = head1;
        head1->next = NULL;
        head1 = next;

        tail->next = temp;
        tail = temp;
        

       }

       else{
        Node *temp = new Node;
        Node *next = head2->next;

        temp = head2;
        head2->next = NULL;
        head2 = next;

        tail->next = temp;
        tail = temp;
       }

       if(head1){
        tail->next = head1;
       }
       else {
        tail->next = head2;
       }

    }

    return head->next;
    
}

// merge sorted list

int main()
{
    // insert first
    int arr[] = {1,4,5,6,7,8,9};
    int arr1[] = {1,2,3,9,10};
    // create 
    Node *head1 = CreateLinkedlist(arr, 7);

    Node *head2 = CreateLinkedlist(arr1, 5);

    Node *head = MergeTwoList(head1, head2);
    // traverse
    TraverseLinkedlist(head);
    
  return 0;
}