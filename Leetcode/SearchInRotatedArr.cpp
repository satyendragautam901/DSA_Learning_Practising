#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target) // O(log N) time
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        // left half is sorted
        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right half is sorted
        else
        {
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int searchLinear(vector<int> &nums, int target) // O(n) time
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int>ar{4,5,6,7,0,1,2};
    cout<<"Found at location " <<search(ar,7);
    return 0;
}