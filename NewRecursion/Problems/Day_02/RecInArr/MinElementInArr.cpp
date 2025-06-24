#include<iostream>
#include<vector>
using namespace std;

int minElement(vector<int>&ar, int index){
    if(index == ar.size()-1){
        return ar[index];
    }
    return min(ar[index] , minElement(ar, index + 1));
}

int main()
{
    vector<int>ar{1,2,3,4,5};
    cout<<"Min element in this array is "<<minElement(ar, 0)<<endl;
  return 0;
}