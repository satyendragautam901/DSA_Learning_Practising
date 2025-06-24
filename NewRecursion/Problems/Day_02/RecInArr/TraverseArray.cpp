#include<iostream>
#include<vector>
using namespace std;

void PrintAr(vector<int>&ar, int index){ // print in increasing order
    if(index == ar.size()){
        
        return;
    }
    cout<<ar[index]<<" ";
    PrintAr(ar, index + 1);
}

void PrintReverse(vector<int>&ar, int index){ // print array in reverse
    if(index == ar.size()){
        
        return;
    }
    PrintReverse(ar, index + 1);
    cout<<ar[index]<<" ";
}

void PrintArray(int ar[] , int index){ // this will also print in reverse
    if(index == -1){
        return ;
    }
    cout<<ar[index]<<" ";
    PrintArray(ar,index - 1);
}
int main()
{
    // traverse array by the help of recursion
    vector<int>ar{1,2,3,4,5};
    PrintReverse(ar,0);
    cout<<endl;
    int arr[] = {2,3,1,3,4};
    PrintArray(arr, 4);
  return 0;
}