#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

// <------------ operationo on array ------------>

// traverse/display 
void display(struct Array arr){
    
    for(int i = 0; i<arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
}

// append/add element at last
void append(struct Array *arr, int x){
    cout<<" Ardd "<<arr<<endl;
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}

// insert elements as a given index
void Insert(struct Array *arr, int index, int x){
    if(index>=0 && index<=arr->length){
        for(int i= arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
            arr->A[index] = x;
            arr->length++;
        }
    }
}

int main()
{
    // int Arr[10]= {1,2,3,4,5,6};
    // int length = 6;
    
    // // insert at a given index

    // Arr[length] = 10;
    // length++;

    // // display 
    // Arr[length]= 20;
    // for(int x: Arr){
    //     cout<<x<<" ";
    // }


    // append by default this will add at last index

    
    Array arr = {{1,2,3,4,5}, 20, 5};
    
    // append( &arr, 500);
    Insert(&arr, 3, 50);
    display(arr);

  return 0;
}