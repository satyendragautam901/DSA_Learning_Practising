#include<iostream>
#include<vector>
using namespace std;

bool searchElement(vector<int>&ar, int index, int target){
    if(index == ar.size()){ // if not found or index goes out of scope
        return 0;
    }

    if(ar[index] == target){ // if found
        return 1;
    }
    return searchElement(ar,index + 1,target);
}

int main()
{
    vector<int>ar{1,2,3,4,5};
    if(searchElement(ar,0,5)){
        cout<<"Element is found "<<endl;
        return 1;
    }
    cout<<"Not found "<<endl;
  return 0;
}