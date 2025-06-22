#include<iostream>
using namespace std;
void TransposeMatrix(int ar[][4], int row, int col){
    int temp[4][4];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            temp[j][i] = ar[i][j];
        }
    }

    // print transpose matrix
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

void TransposeInMemory(int ar[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = i+1; j<col; j++){
            swap(ar[i][j], ar[j][i]);
            
        }
    }

    // print transpose matrix
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    TransposeInMemory(ar,4,4);
  return 0;
}