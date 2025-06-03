#include<iostream>
using namespace std;

void PrintArray(int ar[], int size){
    for(int i = 0; i<size; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

// both method is linearallly search so it take O(n) time

// first occurence in the array
void FirstOccu(int ar[],int size, int target){
    int index = -1;
    for(int i = 0; i<size; i++){
        if(ar[i] == target){
            index = i;
            break;
        }
    }

    cout<<"first occurence is found at "<<index<<endl;
}

// last occurence
void LastOccur(int ar[], int size, int target){
    int index = -1;
    for(int i = 0; i<size; i++){
        if(ar[i] == target){
            index = i;
        }
    }

    cout<<"last occurence is found at "<<index<<endl;
}

// using binary

void FirstOccuBinary(int ar[],int size, int target){
    int start = 0;
    int end = size;
    int found = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        // if target if found
        if(ar[mid] == target){
            found = mid;
            end = mid-1;
            cout<<"mid and target is same "<<endl;
        }

        // if target is lesser than mid
        else if(ar[mid] > target){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    if(found == -1){
        cout<<"Sorry!, unable to found "<<endl;
        return;
    }
    else{
        cout<<"First occurence is found at location "<<found<<endl; 
    }
}

// last occurence 
void LastOccuBinary(int ar[],int size, int target){
    int start = 0;
    int end = size;
    int found = -1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        // if target if found
        if(ar[mid] == target){
            found = mid;
            start = mid + 1;
            cout<<"mid and target is same "<<endl;
        }

        // if target is lesser than mid
        else if(ar[mid] > target){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    if(found == -1){
        cout<<"Sorry!, unable to found "<<endl;
        return;
    }
    else{
        cout<<"First occurence is found at location "<<found<<endl; 
    }
}
int main()
{
    int arr[] = {2,3,3,4,5,6,6,6};
    PrintArray(arr, 8);

    // count occurence
    FirstOccu(arr, 8, 6);
    LastOccur(arr, 8 , 6);

    // using binary
    cout<<"========================"<<endl;
    
    // FirstOccuBinary(arr, 8,2);
    LastOccuBinary(arr, 8,6);
  return 0;
}