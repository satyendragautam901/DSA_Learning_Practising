#include<iostream>
#include<vector>
using namespace std;
/*
Bubble sort - In each iteration it compare with next element if current element is greater than then swap with next. and so on..
*/

void BubbleSort(vector<int>&ar){
    for(int i = 0; i<ar.size(); i++){ // this loop till n-1 times.
        bool swapped = false ; // this will tract that if an array if sorted or not .

        // After every round, the largest element moves to the end, so we reduce the comparison range by i.
        // You can run this loop till ar.size(), but it would waste CPU cycles unnecessarily.
        for(int j = 0; j<ar.size()-1-i; j++){


            if(ar[j] > ar[j+1]){ // agar current element next element se greater hai to swap kr do . now largest element will be at last index
                swap(ar[j], ar[j+1]);
                swapped = true;
            }
        }

        if(!swapped){
            break;;
        }
    }
}

void PrintArray(vector<int>&ar){
    for(int i = 0; i<ar.size(); i++){
        cout<<ar[i]<<" ";
    }
}

int main()
{
    /*
    int arr[6] = {10, 8, 2, 3, 1, 4};
    int n = 6;
    for(int i =n-2; i>=0; i--){
        // to monitor swapping is done or not
        bool swapped = 0;
        for(int j = 0; j<n; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped =1;
            }   
        }
        // break the loop if no swapping
        if (!swapped)
            {
               break;
            }

    }
    
    */

    vector<int>ar{10, 8, 2, 3, 1, 4};
    cout<<"Before bubble sort : ";
    PrintArray(ar);
    BubbleSort(ar);
    cout<<"\nAfter bubble sort : ";
    PrintArray(ar);

  return 0;
}