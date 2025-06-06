#include<iostream>
#include<iomanip>
using namespace std;
void RotateColumnWise(int ar[][4], int row, int col)
{
    // Print 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout <<setw(3)<<ar[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"============="<<endl;

    int start = 0;
    int end = row - 1;

    

    while (start < end)
    {
        for (int i = 0; i<row; i++)
        {
            swap(ar[i][start], ar[i][end]);
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
    // rotate matrix column wise
    RotateColumnWise(ar,4,4);
  return 0;
}