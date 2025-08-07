#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int> &nums)
{
    // first count number of 0's, 1's, and 2's
    int count0 = 0, count1 = 0, count2 = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count0++;
        }
        else if (nums[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    cout << "zeros " << count0 << " ones " << count1 << " two " << count2 << endl;
    // first fill 0
    for (int i = 0; i < count0; i++)
    {
        nums[i] = 0;
    }
    // for 1
    for (int i = count0; i < count1 + count0; i++)
    {
        nums[i] = 1;
    }
    // now for 2
    for (int i = count1 + count0; i < n; i++)
    {
        nums[i] = 2;
    }
}

int main()
{
    vector<int> ar{2, 0, 2, 1, 1, 0};
    sortColors(ar);
    return 0;
}