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

Node *RemoveKthNode(Node *head, int k){
    int count = 1;
    Node *current = head;
    Node *previous = NULL;

    // if k = 1 then all the nodes will be deleted
    if(k ==1){
        cout<<"You have deleted all the nodes "<<endl;
        return NULL;
    }

    while (current)
    {
        if(count == k){
            previous->next = current->next;
            delete current;
            current = previous->next;
            count =1;
        }
        else{
            previous = current;
            current = current->next;
            count++;
        }
    }

    return head;
    
}

int main()
{
    // insert first
    int arr[] = {5,6,7,8,9,4,1};

    // create 
    Node *head = CreateLinkedlist(arr, 7);

    // remove
    head = RemoveKthNode(head, 1);

    // traverse
    TraverseLinkedlist(head);

  return 0;
}