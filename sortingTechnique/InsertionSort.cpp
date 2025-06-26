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

void InsertionSortUsingSwapping(vector<int>&ar){
    cout<<"\nInsertion sort using swapping "<<endl;
    for(int i = 1; i<ar.size(); i++){ // this loop run n-1 times
        // check and swapp
        for(int j = i; j>0; j--){
            if(ar[j] < ar[j-1]){ // if current element is less than previous then swap.
                swap(ar[j], ar[j-1]);
            }
            else{
                break;
            }
        }
    }
}

void InsertionSortUsingShifting(vector<int>&ar){
    cout<<"\nInsertion sort using shifting "<<endl;

    for(int i = 1; i<ar.size(); i++){ // this loop run n-1 times
        int key = ar[i]; // to which we want to compare and place it after correct position.

        int j = i-1; // start comparing from i-1 location. jaha i hai usse ek index piche se comare kro.

        while (j>=0 && ar[j] > key) // jab tak key chhota hai tab tak shift krte rho and j must be greater than 0
        {
            ar[j + 1]  = ar[j]; // swap krna hai next element to with current j
            j--;
        }

        ar[j+1] = key; // now j ya to 0 bn gya hota hai correct position se ek kam ho gya hoga.
        
    }
}

void PrintArray(vector<int>&ar){
    for(int i = 0; i<ar.size(); i++){
        cout<<ar[i]<<" ";
    }
}
int main()
{
    vector<int>arr{10, 8, 2, 3, 1, 4};
    cout << "Before sorting: ";
    PrintArray(arr);

    cout << "\nAfter sorting: ";
    InsertionSortUsingShifting(arr);
    PrintArray(arr);

    


  return 0;
}