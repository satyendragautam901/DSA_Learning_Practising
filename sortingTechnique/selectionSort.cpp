#include<iostream>
#include<vector>
using namespace std;

/*
Selection sort - It works round by round . In first round it try to find min element in the array and swap with first
                In second round it start finding min element from next index and swap with the min element.

                {7,5,1,2,8,9}
                R1 {1,5,7,2,8,9}
                R2 {1,2,7,5,8,9}
                R3 {1,2,5,7,8,9}
                R4 as it is 
*/

void SelectionSort(vector<int>&ar){

    // Time Complexity: O(n^2)
    // Space Complexity: O(1) – In-place


    for(int i = 0 ; i<ar.size(); i++){ // this loop works like round

        int min = i; // find min element
        for(int j = i+1; j<ar.size(); j++){
            if(ar[j] < ar[min]){
                min = j;
            }
        }

        swap(ar[i], ar[min]); // swap after finding min element.
    }

}

// Get index of min element from start to end
int MinIndex(vector<int>& ar, int start, int minIndex) {
    if (start == ar.size()) return minIndex;

    if (ar[start] < ar[minIndex]) {
        minIndex = start;
    }

    return MinIndex(ar, start + 1, minIndex);
}

// Recursive selection sort
void SelectionSortRec(vector<int>& ar, int start = 0) {
    if (start == ar.size() - 1) return;

    int minIdx = MinIndex(ar, start, start);
    swap(ar[start], ar[minIdx]);

    SelectionSortRec(ar, start + 1);
}

void PrintArray(vector<int>&ar){
    for(int i = 0; i<ar.size(); i++){
        cout<<ar[i]<<" ";
    }
}
int main()
{
    


    vector<int>arr{10, 8, 2, 3, 1, 4};
    SelectionSortRec(arr,0);
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