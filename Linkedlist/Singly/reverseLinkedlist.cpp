#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};

// create Linkedlist
Node* CreateLinkedlist(int ar[], int size){
    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 0; i < size; i++){
        Node *temp = new Node;
        temp->data = ar[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    return head;
}


// traversing 
void TraverseLinkedlist(Node *temp){
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

Node* ReverseLinkedlist(Node* head) {
    /*
    if (!head) return NULL;

    vector<int> values;
    Node* temp = head;

    // Step 1: Store all node values
    while (temp) {
        values.push_back(temp->data);
        temp = temp->next;
    }

    // Step 2: Create new reversed list
    Node* newHead = NULL;
    Node* tail = NULL;

    for (int i = values.size() - 1; i >= 0; i--) {
        Node* newNode = new Node;
        newNode->data = values[i];
        newNode->next = NULL;

        if (!newHead) {
            newHead = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return newHead;
    */

    // declare a temporary node
    Node *temp = head;

    // an array to store linkedlist values
    vector<int>values;
    while (temp)
    {
        values.push_back(temp->data);
        temp = temp->next;
    }

    temp = head;
    int i = values.size()-1;

    while (temp!= NULL)
    {
        temp->data = values[i];
        i--;
        temp = temp->next;
    }
    // here temp can't be return bcz it points to NULL
    return head;
        
}

// reverse linkedlist
Node* ReverseLinkdelist(Node* head) {
    Node* previous = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;    // Store next node
        current->next = previous; // Reverse current node's pointer
        previous = current;      // Move previous one step forward
        current = next;          // Move current one step forward
    }

    head = previous;
    return head;
}


int main()
{
    // create linkedlist
    int arr[] = {5,6,8,7,9,2};
    Node *head = CreateLinkedlist(arr, 6);

    // reversing 
    head = ReverseLinkedlist(head);
    // traverse
    TraverseLinkedlist(head);

  return 0;
}