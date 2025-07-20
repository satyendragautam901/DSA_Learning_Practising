#include<iostream>
#include<queue>
using namespace std;
/*
Tree : Tree is a hierarchical data structure of node, where each node has relationship with it's parent.
Binary tree: It is a special type of tree in where every node have atmost 2 childeren.

*/

class Node{
    public:
        int data;
        Node *left, *right;

        Node(int value){
            data = value;
            left = right = nullptr;
        }
};

void CreateTree(){
    int x;
    int first, second;
    cout<<"Enter the root of tree "<<endl;
    cin>>x;

    queue<Node*>q; // holds the address of each node.
    Node *root = new Node(x); // parent node
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front(); // address of parent node.
        q.pop();

        // left children
        cout<<"Enter left child value of "<<temp->data<<endl;
        cin>>first;

        if(first != -1){
            temp->left = new Node(first);
            q.push(temp->left);
        }

        // right children
        cout<<"Enter right child value of "<<temp->data<<endl;
        cin>>second;

        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    
}

int main()
{
    CreateTree();
  return 0;
}