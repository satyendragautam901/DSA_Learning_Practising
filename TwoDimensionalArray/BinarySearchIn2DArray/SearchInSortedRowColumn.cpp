#include<iostream>
#include<iomanip>
using namespace std;
// This matrix is only sorted according to row or column but not overall.

void Print(int ar[][5], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<setw(3)<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Search(int ar[][5], int row, int col, int target){
    
    // step 1. start at top right corner.
    // for binary search is applicable if increasing / decreasing . or one side increasing and another decreasing.

    int i = 0; 
    int j = col -1;
    while (i < row && j >= 0)
    {
        if(ar[i][j] == target){
            cout<<"Found"<<endl;
            return;
        }

    // step 2. move target is smaller then move left.
        else if(ar[i][j] < target){
            i++;
        }

    // step 3. else move bottom.
        else{
            j--;
        }
    }
    cout<<"Not found "<<endl;
    
}

int main()
{
    int ar[5][5] = {4,8,15,25,60,18,22,26,42,80,36,40,45,68,104,48,50,72,83,130,70,99,114,128,170};
    
    Search(ar,5,5, 50);
  return 0;
}