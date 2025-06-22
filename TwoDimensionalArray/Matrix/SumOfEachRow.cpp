#include<iostream>
using namespace std;
void SumOfRow(int ar[][4], int row, int col)
{
    
    // Row Sum
    cout << "Row-wise Sum:"<<endl;
    
    // This loop iterate over each row
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += ar[i][j];
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    
}
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    SumOfRow(ar,4,4);
  return 0;
}