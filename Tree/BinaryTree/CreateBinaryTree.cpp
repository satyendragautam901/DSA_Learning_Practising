#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;

        Node(int value){
            data = value;
            left = right = nullptr;
        }
};

Node *BinaryTree(){
    int x ;
    cin>>x;
    if(x == -1){
        return nullptr;
    }

    Node *temp = new Node(x);
    cout<<"Enter left child of "<<x<<" :"<<endl;
    temp->left = BinaryTree(); // left child

    cout<<"Enter right child of "<<x<<" :"<<endl;
    temp->right = BinaryTree(); // right child

    return temp;

}

void PreOrder(Node *root){
    if(root == nullptr){
        return;
    }

    // first node
    cout<<root->data<<" ";

    // left child
    PreOrder(root->left);

    // right child
    PreOrder(root->right);
}

void PostOrder(Node *root){
    if(root == nullptr){
        return;
    }

    // left child
    PreOrder(root->left);

    // right child
    PreOrder(root->right);

    // last node
    cout<<root->data<<" ";
}

void InOrder(Node *root){
    if(root == nullptr){
        return;
    }

    // left child
    PreOrder(root->left);
   
    // between node
    cout<<root->data<<" ";

    // right child
    PreOrder(root->right);

}


int main()
{
    Node *root;
    cout<<"Enter root node "<<endl;
    root = BinaryTree();

    cout<<"preorder ";
    PreOrder(root);

    cout<<"\nInorder ";
    InOrder(root);

    cout<<"\nPostOrder ";
    PostOrder(root);

    
  return 0;
}