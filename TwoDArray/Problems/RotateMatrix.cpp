#include<iostream>
#include<iomanip>
using namespace std;
void RotateMatrixByNinetyDegree(int ar[][4], int row, int col){
    int ans[4][4];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            ans[j][col-1-i] = ar[i][j];
        }
    }

    // print 
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<setw(3)<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void RotateMatrixByNinetyDegreeInMemory(int ar[][4], int row, int col){
    // step:1 to transpose 
    for(int i = 0; i<row; i++){
        for(int j = i+1; j<col; j++){
            swap(ar[i][j], ar[j][i]);
        }
    }
    

    // step:2 reverse 
    for(int i = 0; i<row; i++){
        int start = 0;
        int end = col-1;
        while (start<end)
        {
            swap(ar[i][start], ar[i][end]);
            start++;
            end--;
        }
        
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<setw(3)<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    RotateMatrixByNinetyDegreeInMemory(ar, 4,4);
  return 0;
}