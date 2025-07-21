#include <iostream>
#include <vector>
using namespace std;

void RotateKTimes(vector<int> &ar, int k) // O(k*n) time
{
    int n = ar.size();

    while (k > 0)
    {
        int temp = ar[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            ar[i] = ar[i - 1];
        }
        ar[0] = temp;

        k--;
    }
}

void reverse(vector<int> &nums, int start, int end) // O(n) time
{
    while (start < end)
    {
        swap(nums[start++], nums[end--]);
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    // Step 1: Reverse whole array
    reverse(nums, 0, n - 1);
    // Step 2: Reverse first k elements
    reverse(nums, 0, k - 1);
    // Step 3: Reverse remaining elements
    reverse(nums, k, n - 1);
}

void Print(vector<int> &ar)
{
    for (auto a : ar)
    {
        cout << a << " ";
    }
}

int main()
{
    int k = 4;

    vector<int> ar{1, 2, 3, 4, 5, 6, 7};
    cout << "before rotate\n";
    Print(ar);
    cout << "\nafter rotate\n";
    rotate(ar, 3);
    Print(ar);
    return 0;
}