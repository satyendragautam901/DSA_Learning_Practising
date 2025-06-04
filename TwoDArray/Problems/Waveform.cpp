#include <iostream>
#include <iomanip>
using namespace std;

void PrintWaveform(int ar[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j<col; j++){
            cout<<setw(3)<<ar[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    // print like this -> 123487659101112...........
    PrintWaveform(ar, 4, 4);

    return 0;
}