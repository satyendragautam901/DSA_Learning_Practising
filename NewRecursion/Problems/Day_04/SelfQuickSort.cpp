#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>& ar, int start, int end) {
    int pos = start; // this will track position to swap

    for(int i = start; i<=end; i++){
        if(ar[i] <= ar[end]){ // ar[end] is pivot element
            swap(ar[i], ar[pos]); // swap with pos and increase pos
            pos++;

        }
    }

    return pos-1; // till here pos will point to next index because of pos++.
}

void Quicksort(vector<int> &ar, int start, int end){
    if(start >= end){ // base condition
        return;
    }

    int pivot = findPivot(ar, start, end);
    cout<<"Pivot index "<<pivot<<endl;

    // left side
    Quicksort(ar,start, pivot-1);

    // right side
    Quicksort(ar, pivot + 1, end);
}

void PrintArr(vector<int>&ar){
  for(int i = 0; i<ar.size(); i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;
}
int main()
{
    vector<int>ar{8,9,5,2,1,6};
    Quicksort(ar,0,ar.size()-1);
    PrintArr(ar);

  return 0;
}