#include<iostream>
#include<queue>
#include<vector>
using namespace std;
/*
1. 
*/
void TimeToBuy(vector<int>&ar,int k){
    queue<int>q; // temporary queue for easy calculation

    for(int i = 0 ; i<ar.size(); i++){
        q.push(i); // push index rather than value 
    }

    int time = 0; // store time 

    while (ar[k] != 0)// we directly reduce value in array rather than queue otherwise it may cause problem
    {
        ar[q.front()]--; // first assign one ticket
        time++; // increase time with 1.
        
        if(ar[q.front()] > 0){ // check if need one more ticket

            q.push(q.front());
        }

        q.pop(); // pop so that next person in the line get ticket
    }
    cout<<"Time to buy ticket for "<<k<<" is "<<time<<endl;

}
int main()
{
    vector<int>ar{2,3,2};
    TimeToBuy(ar, 2);
  return 0;
}