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

// delete

Node *DeleteNode(Node *head, int position){
    // if linkedlist not exist
    if(head == NULL){
        return NULL;
    }
    
    // if single node is exist
    if(head->next == NULL){
        delete head;
        return NULL;
    }

    // Count the length first
    int length = 0;
    Node* temp = head;
    while (temp) {
        length++;
        temp = temp->next;
    }

    // Case: delete first node
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }

    
    // case: delete last node
    if(position == length){
        cout<<"last node will delete soon "<<endl;
        Node * lastNode = head;
        
        while (lastNode->next != NULL)
        {    
            lastNode = lastNode->next;
        }

        lastNode->prev->next = NULL;
        delete lastNode;
        return head;
    }

    else 
        {
            cout<<"Given position element will deleted "<<position<<endl;
            Node *current = head;
            while (position--)
            {
                current = current->next;
            }

            current->prev->next = current->next;
            current->next->prev = current->prev;

            delete current;
            
        }

    return head;
}


int main()
{
    // insertion
    int arr[] = {2,5,6,7,8,9,1};

    
    Node *head = InsertAtLast(arr, 7);

    // delete node
    head = DeleteNode(head, 3);

    // traversal
    TraverseLinkedlist(head);
  return 0;
}