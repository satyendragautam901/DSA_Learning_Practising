#include<iostream>
using namespace std;
void SumOfColumn(int ar[][4], int row, int col){
    cout<<"Sum of Column :"<<endl;
    for(int j = 0; j<col; j++){
        // This sum will be executed 0 for every column
        int sum = 0;
        for(int i = 0; i<row; i++){
            sum+=ar[i][j];
        }
        cout<<"Column "<<j+1<<" is "<<sum<<endl;
    }
}
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    SumOfColumn(ar, 4,4);
  return 0;
}