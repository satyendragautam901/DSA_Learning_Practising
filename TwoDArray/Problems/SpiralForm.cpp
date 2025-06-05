#include <iostream>
using namespace std;

void SpiralForm(int ar[][4], int row, int col) {
    int top = 0;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;

    while (top <= bottom && left <= right) {
        // Top row (left to right)
        for (int j = left; j <= right; j++) {
            cout << ar[top][j] << " ";
        }
        top++;

        // Right column (top to bottom)
        for (int i = top; i <= bottom; i++) {
            cout << ar[i][right] << " ";
        }
        right--;

        // Bottom row (right to left)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << ar[bottom][j] << " ";
            }
            bottom--;
        }

        // Left column (bottom to top)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << ar[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    int ar[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    SpiralForm(ar, 4,4);
  return 0;
}