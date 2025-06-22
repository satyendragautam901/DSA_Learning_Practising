#include<iostream>
using namespace std;
void BinarySearch(int ar[][4],int row, int col, int target){

        // step 1. First traverse on each row and see that first element is less than target and target is less than last element in the array.

    for(int i = 0 ; i<row; i++){
        int start = 0; int end = col -1;
        if(ar[i][start] <= target && target <= ar[i][end]){
            
        // step 2. if that is row is found then start finding in that row.
        while (start <= end)
        {
            int mid = start + (end - start) /2;

            if(ar[i][mid] == target){ // if target is found
                cout<<"Element is found at index "<<i<<mid<<endl;
                return;
            }
            else if(ar[i][mid] > target){ // if target is less than
                end = mid -1;
            }
            else{ // if target is grater
                start = mid + 1;
            }
        }
        
        }
    }
    // time complexity is O(row + log(col)).
}

void EfficientBinarySearch(int ar[][4],int row, int col, int target){
    /*
    Note. In C++ 2D array store in Row Major Order.
    If we have index then we can calculate row index and column index.
    Row_index = Index / Col.
    Column_index = Index % col.
    
    */

    int start = 0; 
    int end = row * col -1; // last index = number of elements - 1.

    while (start <= end) // time complexity O(n).
    { 
        int mid = start + (end - start) / 2;
        int row_Index = mid / col;
        int col_Index = mid % col;

        if(ar[row_Index][col_Index] == target){

            cout<<"Element is found at index "<<row_Index<<col_Index<<endl;
            return;
        }

        else if(ar[row_Index][col_Index] > target){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }

    }
    


};
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    EfficientBinarySearch(ar,4,4,11);
  return 0;
}