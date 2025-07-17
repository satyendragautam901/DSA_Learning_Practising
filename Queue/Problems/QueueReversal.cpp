#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

void Reverse(queue<int>&q){
    vector<int>temp;
    while (!q.empty()) // first insert and store in temporary array
    {
        temp.push_back(q.front());
        q.pop();
    }
    for(int i = temp.size()-1; i>=0; i--){
        q.push(temp[i]);
    }
}

void ReverseUsingStack(queue<int>&q){
    stack<int>temp;
    cout<<"Reverse using stack "<<endl;
    while (!q.empty()) // first insert and store in temporary array
    {
        temp.push(q.front());
        q.pop();
    }

    while (!temp.empty())
    {
        q.push(temp.top());
        temp.pop();
    }
    
}

void PrintQueue(queue<int>&q1){
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\nverify "<<q1.front()<<endl;
}

int main()
{
    queue<int>q1;
    q1.push(5);
    q1.push(10);
    q1.push(15);
    q1.push(21);
    // PrintQueue(q1);
    // Reverse(q1);
    ReverseUsingStack(q1);
    PrintQueue(q1);
  return 0;
}