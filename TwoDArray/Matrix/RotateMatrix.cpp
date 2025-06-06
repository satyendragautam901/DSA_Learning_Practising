#include <iostream>
#include <iomanip>
using namespace std;

void RotateMatrixByNinetyDegree(int ar[][4], int row, int col)
{
    int ans[4][4];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][col - 1 - i] = ar[i][j];
        }
    }

    // print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void RotateMatrixByNinetyDegreeInMemory(int ar[][4], int row, int col)
{
    // step:1 to transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(ar[i][j], ar[j][i]);
        }
    }

    // print
    cout << "After transpose " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << ar[i][j] << " ";
        }
        cout << endl;
    }
    cout << "=================" << endl;
    // step:2 reverse
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(ar[i][start], ar[i][end]);
            start++;
            end--;
        }
    }

    // print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << ar[i][j] << " ";
        }
        cout << endl;
    }
}

void RotateMatrix(int ar[][4], int row, int col)
{
    /*
    can be solved using 90 + 90 =180Degree
    */

    // step:1 to transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(ar[i][j], ar[j][i]);
        }
    }
    // step:2 reverse
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(ar[i][start], ar[i][end]);
            start++;
            end--;
        }
    }
    // step:3 to transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(ar[i][j], ar[j][i]);
        }
    }
    // step4 reverse
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(ar[i][start], ar[i][end]);
            start++;
            end--;
        }
    }

    // print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << ar[i][j] << " ";
        }
        cout << endl;
    }
}
void RotateMatrixEfficient(int ar[][4], int row, int col)
{
}



int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int ar2[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    // RotateMatrixByNinetyDegreeInMemory(ar, 4,4);

    // rotate matrix by 180 degree
    // RotateMatrix(ar,4,4);

    // rotate 180 degree more efficient way
    RotateMatrixEfficient(ar, 4, 4);

    return 0;
}