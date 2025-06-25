#include<iostream>
#include<vector>
using namespace std;

/*
Insertion sort(shifting) - It also works round by round . In first round ,start with index 1 and comparision start from 0 index then 1 and so on. 
                 If 0 index value is smaller then shift 
                

                {7,5,1,2,8,9}
                R1 {5,7,1,2,8,9}
                R2 {1,5,7,2,8,9}
                R3 {1,2,5,7,8,9}
                R4 as it is 
*/



void PrintArray(vector<int>&ar){
    for(int i = 0; i<ar.size(); i++){
        cout<<ar[i]<<" ";
    }
}
int main()
{
    vector<int>arr{10, 8, 2, 3, 1, 4};
    PrintArray(arr);


    /*
    
    cout << "Before sorting: ";
    PrintArray(arr);

    cout << "\nAfter sorting: ";
    SelectionSort(arr);
    PrintArray(arr);
    */

    


  return 0;
}