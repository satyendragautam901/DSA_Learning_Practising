#include<iostream>
#include<iomanip>
using namespace std;

void AddMatrix(int ar[][4],int ar2[][4], int row, int col){
    int ar3[3][4];
    for(int i = 0; i<row; i++){
        // this loop for column
        for(int j = 0; j<col; j++){
            ar3[i][j] = ar[i][j] + ar2[i][j];
        }
        
        
    }
    // traverse to see
    for(int i = 0; i<row; i++){
        // this loop for column
        for(int j = 0; j<col; j++){
            cout << setw(3) << ar3[i][j];
        }
        cout<<endl;
        
        
    }
}
int main()
{
    int ar1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int ar2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    AddMatrix(ar1,ar2,3,4);

  return 0;
}