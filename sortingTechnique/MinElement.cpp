#include<iostream>
#include<vector>
using namespace std;

int MinElementUsingRecursion(vector<int>&ar, int index){
    if(index == ar.size()-1){
        return ar[index];
    }

    return min(ar[index], MinElementUsingRecursion(ar, index + 1));
}
int main()
{
    vector<int>arr{8,9,2,5,3,7,10};
    cout<<"min element "<<MinElementUsingRecursion(arr, 0)<<endl;

    int ar[] = {8,9,2,5,3,7,1};

    // find min element 

    // assume min element at index 0
    int minelement = 0;

    // now starts loop from index 1
    for(int i = 1; i<7; i++){
        if(ar[minelement] > ar[i]){
            minelement = i;
        }
    }

    cout<<"Min element found at index "<< minelement<<" and value is "<< ar[minelement]<<endl;

    // second min element

    // assume second min element is at index 0
    int secondMin = 0;


    for(int i = 1; i<7; i++){
        if((ar[secondMin] > ar[i]) && (ar[i]!=ar[minelement])){
            secondMin = i;
        }
    }

    cout<<"Second Min element found at index "<< secondMin<<" and value is "<< ar[secondMin]<<endl;

  return 0;
}