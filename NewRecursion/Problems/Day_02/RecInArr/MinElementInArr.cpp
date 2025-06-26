#include<iostream>
#include<vector>
using namespace std;

int minElement(vector<int>&ar, int index){
    if(index == ar.size()-1){
        return ar[index];
    }

    int mini = minElement(ar, index + 1);
    return min(ar[index] , mini);
}

bool checMinIsPresenT(vector<int>&ar, int index, int key){
    if(index == ar.size()){
        return 0;
    }
    if(ar[index]<key){
        cout<<ar[index]<<endl;
        return 1;
    }
    return checMinIsPresenT(ar,index+1,key);
}

int MinIndex(vector<int>&ar, int index, int minIndex){
    if(index == ar.size()){
        return minIndex;
    }
    if(ar[index] < ar[minIndex]){
        minIndex = index;
    }
    return MinIndex(ar, index + 1, minIndex);
}

int main()
{
    vector<int>ar{8,2,3,4,5};
    cout<<"Min element in this array is "<<minElement(ar, 0)<<endl;

    if(checMinIsPresenT(ar,0,3)){
        cout<<"present ";
    }

    cout<<"Min index is "<<MinIndex(ar,0,0)<<endl;

    return 0;
}
