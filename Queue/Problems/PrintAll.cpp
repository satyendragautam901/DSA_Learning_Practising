#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void PrintQueue(queue<int>&q1){
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\nverify "<<q1.front()<<endl;
}

void PrintQueueAndStore(queue<int>&q1){ //space O(n)
    vector<int>ans;
    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        ans.push_back(q1.front()); // store in ans
        q1.pop();
    }

    for(int i = 0; i<ans.size(); i++){
        q1.push(ans[i]);
    }
    cout<<"\nverify "<<q1.front()<<endl;
}

void PrintQueueStore(queue<int>&q1){ // without extra space
    int size = q1.size();
    
    while (size--)
    {
        cout<<q1.front()<<" ";
        q1.push(q1.front());
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

    //PrintQueue(q1);
    //PrintQueueAndStore(q1);
    PrintQueueStore(q1);
  return 0;
}