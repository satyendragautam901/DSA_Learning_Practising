#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void TraverseLinkedlist(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *InsertAtLast(int ar[], int size)
{
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < size; i++)
    {
        Node *temp = new Node(ar[i]);

        if (head == NULL)
        {
            // First node
            head = temp;
            tail = temp;
        }
        else
        {
            // Append at end
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    return head;
}

void PrintNodeValue(vector<int>&NodeValue){
    // &NodeValue this is reference / nickname to NodeValue
    cout<<"Print node value using function "<<endl;
    for(int x: NodeValue){
        cout<<x<<" ";
    }

    cout<<endl;
}

// remove duplicated
Node *RemoveDuplicate(Node *head)
{
    // This is sorted list

    // using vector
    Node *temp = head;
    vector<int> NodeValue;
    NodeValue.push_back(temp->data);

    while (temp)
    {
        // back refer last element in a vector
        if (NodeValue.empty() || NodeValue.back() != temp->data)
        {
            NodeValue.push_back(temp->data);
        }
        temp = temp->next;
    }

    // Now insert only unique node value element in list

    temp = head;
    for (int i = 0; i < NodeValue.size(); i++)
    {
        temp->data = NodeValue[i];

        // If it's the last value, break and set next = NULL
        if (i == NodeValue.size() - 1)
        {
            temp->next = NULL;
            break;
        }

        temp = temp->next;
    }

    // print node value using function
    PrintNodeValue(NodeValue);

    // for(int x : NodeValue){
    //     cout<<x<<" ";
    // }

    return head;
}

Node *InPlaceDuplicate(Node *head){
    Node *current = head->next;
    Node *prev = head;
    // jab tak current exist krta hai
    while (current)
    {
        if(prev->data == current->data){
            prev->next = current->next;
        
            delete current;
            current = prev->next;
        }
        else{
            prev = prev->next;
            current = current->next;
        }
        
    }
    
    return head;
}

int main()
{
    // insertion
    int arr[] = {1, 2, 2, 5, 5, 6, 7, 7, 8, 9};

    Node *head = InsertAtLast(arr, 10);

    // remove duplicates using vector
    // head = RemoveDuplicate(head);

    // in place remove duplicates 
    head = InPlaceDuplicate(head);

    // traversal
    TraverseLinkedlist(head);
    return 0;
}