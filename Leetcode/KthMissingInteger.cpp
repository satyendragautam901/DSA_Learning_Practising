#include <iostream>
#include <vector>
using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int missing = 0;
    int ptr = 0; // points to matched index in arr
    int n = arr.size();
    int ans;
    int till = arr[n - 1]; // this will ensure that loop runs till

    for (int i = 1; i < till; i++)
    {
        if (ptr < n && i == arr[ptr])
        {
            ptr++;
        }
        else
        {
            missing++;
            ans = i;
            cout << ans << " ";
            if (missing == k)
            {
                break;
            }
        }
    }

    cout << ans;
}

int findKthPos(vector<int> &arr, int k)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int missing = arr[mid] - (mid + 1); // this is formula

        if (missing < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // Final answer is left + k
    return left + k;
}

int main()
{
    vector<int> ar{2, 3, 4, 7, 11};
    findKthPositive(ar, 5);
    return 0;
}