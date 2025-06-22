#include<iostream>
using namespace std;
void DiagonalSum(int ar[][4], int row , int col){

    int MainDiagonalSum = 0;
    int CrossDiagonalSum = 0;

    for(int i = 0; i<row; i++){
        // this loop for column
        int total = 0;
        for(int j = 0; j<col; j++){
            if(i == j){
                MainDiagonalSum +=ar[i][j];
            }
            else if(i + j == row -1){
                CrossDiagonalSum +=ar[i][j];
            }
            else {
                MainDiagonalSum +=0;
                CrossDiagonalSum +=0;
            }
        }
        
    }
    cout<<MainDiagonalSum<<" "<<CrossDiagonalSum<<endl;
}

void MainCrossDiagonalSum(int ar[][4], int row , int col) {
    int MainDiagonalSum = 0;
    int CrossDiagonalSum = 0;

    for(int i = 0; i < row; i++) {
        // Safe only if square matrix (row == col)
        MainDiagonalSum += ar[i][i];
        CrossDiagonalSum += ar[i][col - 1 - i];
    }

    cout << "Main Diagonal Sum: " << MainDiagonalSum << endl;
    cout << "Cross Diagonal Sum: " << CrossDiagonalSum << endl;
}

int main()
{
    int ar[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    DiagonalSum(ar,4,4);
  return 0;
}