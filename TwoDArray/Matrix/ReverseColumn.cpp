#include<iostream>
#include<iomanip>
using namespace std;
void ReverseDiagonal(int ar[][4], int row , int col){

    // this will change row
    for(int i = 0; i<row ; i++){
        // reversing happen here
        int start = 0; 
        int end = col-1;
        while (start < end)
        {
            swap(ar[i][start], ar[i][end]);
            start++;
            end--;
        }
        
    }

    for(int i = 0; i<row; i++){
        // this loop for column
        for(int j = 0; j<col; j++){
            cout << setw(3) << ar[i][j];
        }
        
        cout<<endl;
    }
}
int main()
{
    int ar[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    ReverseDiagonal(ar,4,4);
  return 0;
}