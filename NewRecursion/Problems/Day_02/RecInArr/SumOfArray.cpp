#include<iostream>
#include<vector>
using namespace std;

/*
static int sum = 0;
void Sum(vector<int>&ar, int index){
    if(index == ar.size()){
        return;
    }
    sum = sum + ar[index];
    Sum(ar, index + 1);
}

*/

int Sum(vector<int>&ar, int index){

    if(index == ar.size()){
        return 0;
    }
    
    return ar[index] + Sum(ar, index + 1);
}

// sum from last index
int SumFromLast(vector<int>&ar, int index){
    if(index == -1){
        return 0;
    }
    return ar[index] + SumFromLast(ar, index-1);
}

int main()
{
    vector<int>ar{1,2,3,4,5};
    
    // cout<<Sum(ar,0);
    cout<<SumFromLast(ar,ar.size()-1);
  return 0;
}