#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *CreateLinkedlist(int ar[], int size){
    // Node *head = NULL;
    // This will insert in reverse order
    /*
    for(int i = 0; i<size; i++){
        Node *temp = new Node;
        temp->data = ar[i];
        temp->next = head;
        head = temp;
    }
    */

    // insert in as array element is

    // head is already present
    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 0; i<size; i++){
        Node *temp = new Node;
        temp->data = ar[i];
        temp->next = NULL;

        // single node insert
        if(head == NULL){
            head = temp;
            tail = temp;
        }

        // if not first node
        else{
            tail->next = temp;
            tail = temp;

        }    
    }

    return head;
}

// traversing
void Traverse(Node *temp){
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

// count node
void CountNode(Node *head){
    /*
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count = count+1;
        temp = temp->next;
    }
    cout<<"Number of node is "<<count<<endl;

    int mid = count/2;
    cout<<"Mid element index is "<<mid<<endl;

    
    temp = head;

    for(int i = 0; i < mid; i++) {
        temp = temp->next;
    }

    if (temp != NULL) {
        cout << "Middle element data is: " << temp->data << endl;
    }
    */

    // using slow and fast pointer
    
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"mid element data is "<<slow->data<<endl;
    
}


int main()
{
    // insert first
    int arr[] = {5,6,7,8,9,1,2,3};
    Node *head = CreateLinkedlist(arr, 8);
    Traverse(head);

    // Count node
    cout<<endl;
    CountNode(head);

  return 0;
}