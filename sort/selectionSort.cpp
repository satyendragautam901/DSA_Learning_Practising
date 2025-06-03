#include<iostream>
using namespace std;
int main()
{

    int arr[6] = {10, 8, 2, 3, 1, 4};
    int n = 6;
    int index = 0;

    // how to find smallest element in an array
    /*
    for (int i = index+1; i < n; i++)
    {
        if(arr[i]< arr[index]){
            index = i;
        }
    }
    cout<<"The smallest element in this array is "<<arr[index]<<endl;
    */

    // for(int i = 0; i<n-1; i++){
    //     int index = i;
    //     // smallest number finding

    //     for(int j = i+1; j<n; j++){
    //         if(arr[j] < arr[index]){
    //             index = j;
    //         }
    //         // swapping with index element with smallest element
    //         swap(arr[index], arr[j]);
    //     }
    // }
    

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    
    
    for(int x: arr){
        cout<<x<<" ";
    }

  return 0;
}