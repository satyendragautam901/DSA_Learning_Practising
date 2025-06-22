#include <iostream>
#include <iomanip>
using namespace std;
void RotateMatrix(int ar[][4], int row, int col, int k)
{
    /*
    to reduce rotation . we use k % 4 .
    because at every 4 rotation matrix come to its first position
    */ 

    k = k % 4;
    cout<<"Number of times to be rotate "<<k<<endl;
    while (k)
    {
        if(k ==0){
            return;
        }
        // this code is to rotate matrix by 90 degree. every time it rotate 90degree
        
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
        k--;
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
int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int ar2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // rotate matrix k times
    RotateMatrix(ar, 4, 4, 3);
    return 0;
}