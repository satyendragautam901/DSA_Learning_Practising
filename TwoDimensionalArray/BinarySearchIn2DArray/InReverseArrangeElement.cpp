#include <iostream>
using namespace std;
void BinarySearch(int ar[][4], int row, int col, int target)
{

    // step 1. First traverse on each row and see that first element is less than target and target is less than last element in the array.

    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        if (ar[i][start] >= target && target >= ar[i][end])
        {

            // step 2. if that is row is found then start finding in that row.
            while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (ar[i][mid] == target)
                { // if target is found
                    cout << "Element is found at index " << i << mid << endl;
                    return;
                }
                else if (ar[i][mid] > target)
                { // if target is less than

                    start = mid + 1;
                }
                else
                { // if target is grater
                    end = mid - 1;
                }
            }
        }
    }
    // time complexity is O(row + log(col)). we are only applying binary search in satisfied array.
}
int main()
{
    int ar[4][4] = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}};
        BinarySearch(ar,4,4,3);
    return 0;
}