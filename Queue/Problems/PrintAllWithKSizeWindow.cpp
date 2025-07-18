#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void Display(queue<int>q){
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
}

void PrintAll(vector<int>&ar,int k){
    queue<int>q;
    for(int i = 0; i<k-1; i++){ // first push k-1 element
        q.push(ar[i]);
    }

    for(int i = k-1; i<ar.size(); i++){
        q.push(ar[i]); // first push the element
        Display(q);
        q.pop();
    }
    
}
int main()
{
    vector<int>ar{1,2,3,4,5,6};
    PrintAll(ar,3);
  return 0;
}