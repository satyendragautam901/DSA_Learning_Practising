#include<iostream>
using namespace std;
int main()
{
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

    for(int a: arr){
        cout<<a<<" ";
    }
  return 0;
}