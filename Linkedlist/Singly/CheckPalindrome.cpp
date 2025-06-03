#include<iostream>
#include<vector>
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

// check palindrom
bool CheckPalindrom(Node *head){
    // create a vector to insert node value
    vector<int>value;
    Node *temp = head;

    while (temp)
    {
        value.push_back(temp->data);
        temp = temp->next;
    }

    // for(int x: value){
    //     cout<<x<<" ";
    // }

    
    int i = 0; 
    int j = value.size()-1;
    while (i<j)
    {
        if(value[i] != value[j]){
            return false;
        }
        j--;
        i++;
        
    }
    return true;
    
}

// traversing
void Traverse(Node *temp){
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
 
}

int main()
{
    // insert first
    int arr[] = {1,2,3,2,1};
    Node *head = CreateLinkedlist(arr, 5);
    // check palindrom
    bool pal = CheckPalindrom(head);
    if(pal){
        cout<<"This is Palindrom "<<endl;
    }
    else{
        cout<<"Not palindrom"<<endl;
    }
    Traverse(head);

  return 0;
}