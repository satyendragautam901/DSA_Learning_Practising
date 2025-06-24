#include<iostream>
#include<vector>
using namespace std;

bool binarySearchElement(vector<int>&ar,int start, int end , int target){
    if(start >end){ // if not exist or index goes out of scope
        return 0;
    }

    int mid = start + (end - start)/2;

    if(ar[mid] == target){ // if found
        return 1;
    }

    else if(ar[mid] <target){
        return binarySearchElement(ar,mid + 1, end, target);// if target greater than mid value
    }
    else{
        return binarySearchElement(ar, start , mid-1,target); // if target is less than mid value
    }
}

int main()
{
    vector<int>ar{1,2,3,4,5};
    if(binarySearchElement(ar,0,ar.size(),5)){
        cout<<"Element is found "<<endl;
        return 1;
    }
    cout<<"Not found "<<endl;
  return 0;
}