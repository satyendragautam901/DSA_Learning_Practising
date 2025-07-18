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
    

}

void TimeToBuyEfficient(vector<int>&ar, int k){
    int time = 0;
    for(int i = 0; i<ar.size(); i++){
        if(i<=k){
            time = time + min(ar[i], ar[k]);// before k at max k times got ticket
        }
        else{
            time = time + min(ar[k]-1, ar[i]); // only k-1 at max .
        }
    }

    cout<<"Time to buy ticket for "<<k<<" is "<<time<<endl;
}
int main()
{
    vector<int>ar{2,6,4,3,7};
    //TimeToBuy(ar, 2);
    TimeToBuyEfficient(ar,2);
  return 0;
}