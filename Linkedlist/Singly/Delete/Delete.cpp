#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node* CreatLinkedList(int ar[], int size){
    Node *head = NULL;
    for(int i = 0; i<size; i++){

        Node *temp = new Node;
        temp->data = ar[i];
        // insert at beginning
        temp->next = head;
        head = temp;
    }

    return head;
}

// traversing
void Display(Node *temp){
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

Node *Delete(Node *temp){
    // at front

    /*
    if(temp == NULL){
        return NULL;
    }
    Node *toDelete = temp;
    temp = temp->next;
    delete toDelete;

    return temp;
    */

    // at end

    // edge case for single node
    if(temp->next == NULL){
        delete temp;
        return NULL;
    }

    // else
    Node *current = temp;
    Node *previous = NULL;

    while (current->next != NULL)
    {   
        previous = current;
        current = current->next;
    }
    
    previous->next = NULL;
    delete current;

    return temp;

    // at a particular node
}

Node *DeleteParticularNode(Node *temp, int position){
    // if single node
    if(temp->next == NULL){
        delete temp;
        return NULL;
    }
    // if temp = null
    if(temp == NULL){
        return NULL;
    }

    // if first position
    
    if(position == 0){
        Node *zero = temp;
        temp = temp->next;
        delete zero;
        return temp;
    }

    Node *current = temp;
    Node *previous = NULL;

    for(int i = 0; i<position; i++){
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete current;

    return temp;
}



int main()
{
    // first insert some value
    int arr[]= {5,8,9,7,4,6,3};
    
    Node *head = CreatLinkedList(arr, 7);

    // Delete Node
    // head =  Delete(head);
    cout<<"Head pointing to this node "<<head->data<<endl;

    head =  DeleteParticularNode(head, 0);

    // Traversing
    Display(head);
  return 0;
}