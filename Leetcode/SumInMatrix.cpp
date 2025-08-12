#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// we need to find the largest number in each row and sum 

int matrixSum(vector<vector<int>> &nums)
{
    int ans = 0;
    int row = nums.size();
    int col = nums[0].size();

    // Sort each row in ascending order
    for (auto &r : nums)
    {
        sort(r.begin(), r.end());
    }

    // For each column, find the max across all rows
    for (int i = 0; i < col; i++)
    {
        int temp = 0;
        for (int j = 0; j < row; j++)
        {
            temp = max(temp, nums[j][i]);
        }
        ans += temp;
    }
    return ans;
}
int main()
{
    return 0;
}