#include<iostream>
using namespace std;
void FindMax(int ar[][4], int row, int col){
    int maxValue = INT8_MIN;

    // this will search column . you can do row wise elements will be same in both case

    for(int j = 0; j<col; j++){
        
        for(int i = 0; i<row; i++){
            if(ar[i][j] > maxValue){
                maxValue = ar[i][j];
            }
        }
       
    }

    cout<<"Max element in this Matrix is "<<maxValue<<endl;
}

void FindMin(int ar[][4], int row, int col){
    int minValue = INT8_MAX;

    // this will search column . you can do row wise elements will be same in both case

    for(int j = 0; j<col; j++){
        
        for(int i = 0; i<row; i++){
            if(ar[i][j] < minValue){
                minValue = ar[i][j];
            }
        }
       
    }

    cout<<"Min element in this Matrix is "<<minValue<<endl;
}

int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 150, 13, 14, 15, 16};
    FindMax(ar, 4,4);
    FindMin(ar, 4,4);

  return 0;
}