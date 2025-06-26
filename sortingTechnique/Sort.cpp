#include<iostream>
using namespace std;
int main()
{
    // selection sort

    /*
    // array initialize
    int ar[] = {64,25,12,22,11};

    for(int i = 0; i<5; i++){
        // assume min is at index i
        int minindex = i;
        // finding minimum and swap
        for(int j = i+1; j<5; j++){
            if(ar[j] < ar[minindex]){  
                minindex = j;
            }
            swap(ar[i], ar[minindex]);
        }
    }

    for(int x: ar){
        cout<<x<<" ";
    }
    */

    // finding minimum

    /*
    int minIndex = 0;
    for(int i = 1; i<5; i++){
        if(ar[i]<ar[minIndex]){
            minIndex = i;
        }
        cout<<minIndex;
    }

    for(int x: ar){
        cout<<x<<" ";
    }
    */

    // bubble sort

    /*
    int ar[] = {7,12,9,11,3};

    for(int k = 0; k<5; k++){

        // loop will move till 4 because may be at location 5 some random value is stored

        for(int i = 0; i<4; i++){
            if(ar[i+1] < ar[i]){
                swap(ar[i], ar[i+1]);
            }
        }
    }
    for(int x: ar){
        cout<<x<<" ";
    }
    */

    // insertion sort

    int arr[] = { 64,25,12,22,11 };

    for(int k = 0; k<5; k++){

        for(int i=0; i<4; i++){
            if(arr[i+1] < arr[i]){
                swap(arr[i+1], arr[i]);
            }
        }
    }

    for(int x: arr){
        cout<<x<<" ";
    }

  return 0;
}