#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// creating linkedlist uring recursion
Node *create_recursion(int ar[], int index, int size)
{
    // inserting at end
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node;
    temp->data = (ar[index]);
    temp->next = create_recursion(ar, index + 1, size);
    // this is needed bcz , will return address
    return temp;
};

Node *Insert_back(int ar[], int index, int size, Node* prev){
    // inserting at front

    // base condition
    if(index == size){
        return prev;
    }
    // create a temporary node
    Node *temp = new Node;
    temp->data = ar[index];
    temp->next = prev;
    return Insert_back(ar, index+1, size, temp);
}

int main()
{
    // dynamically declaring Node
    // Node *head = NULL;

    // array
    int arr[] = {2, 3, 4, 5, 6, 8};

    /*
    for(int i = 0; i<6; i++){
            Node *temp = new Node;
            temp->data = arr[i];
            temp->next = head;
            head = temp;
    }
    */

    // creating using recursion
    // Node *head = create_recursion(arr, 0, 6);
    Node *head = Insert_back(arr, 0, 6, NULL);

    // Traverse
    Node *display = head;
    int count = 0;
    while (display != NULL)
    {
        cout << display->data << " ";
        display = display->next;
        count++;
    }

    return 0;
}