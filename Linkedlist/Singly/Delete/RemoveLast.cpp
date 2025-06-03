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

// remove first last

Node *RemoveLast(Node *head, int n){
    // first count no of nodes
    
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    cout<<"No of nodes present is "<<count<<endl;

    Node *previous = NULL;
    Node *current = head;
    // which node is to be deleted
    count-=n;

    // if this was first node
    if(count ==0){
        temp = temp->next;
        head = temp;
        delete temp;
        return head;
    }
    // This is simple form of count>0.
    while (count--)
    {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete current;

    return head;
    // delete last node

    /*
    // if null
    if(head == NULL){
        return NULL;
    }
 
    // if single node
    if(head->next == NULL){
        delete head;
        return NULL;
    }
 
    // if there are multiple nodes
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
 
    delete temp->next;
    temp->next = NULL;
 
    return head;
    */

    
    
    
}

int main()
{
    // insert first
    int arr[] = {5,6,7,8,9,4,1};

    // create 
    Node *head = CreateLinkedlist(arr, 7);

    // remove
    // head = RemoveLast(head, 2);

    // traverse
    TraverseLinkedlist(head);

  return 0;
}