#include<iostream>
using namespace std;
/*
    step 1: Matrix should be square means row and column be same.

    step 2: symmetric matrix is if matrix and transpose of matrix is equal then it is called symmetrix matrix. 
    
*/

void SymmetricMatrix(int ar[][2], int row , int col) {
    if(row != col){
        cout << "Rows and cols are unequal so it can't be a symmetric matrix" << endl;
        return;
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(ar[i][j] != ar[j][i]){
                cout << "This is not a symmetric matrix" << endl;
                return;
            }
        }
    }

    cout << "This is a symmetric matrix" << endl;
}

int main()
{
    int ar[2][2] = {4, -1, -1, 9};
    SymmetricMatrix(ar, 2,2);
  return 0;
}