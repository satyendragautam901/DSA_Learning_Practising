#include<iostream>
#include<iomanip>
using namespace std;
void RotateRowWise(int ar[][4], int row, int col)
{
    int start = 0;
    int end = row - 1;

    while (start < end)
    {
        for (int j = 0; j < col; j++)
        {
            swap(ar[start][j], ar[end][j]);
        }
        start++;
        end--;
    }

    // Print 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout <<setw(3)<<ar[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int ar2[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};
// rotate matrix row wise
    RotateRowWise(ar,4,4);
  return 0;
}