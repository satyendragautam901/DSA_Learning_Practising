#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int first = 0;
    int last = height.size() - 1;
    long long ans = 0;

    while (first < last)
    {
        int width = last - first; // width

        int h = min(height[first], height[last]); // height be min of stick
        long long area = 1LL * width * h;         // prevent overflow
        ans = max(ans, area);

        // Move the pointer with smaller height
        if (height[first] < height[last])
        {
            first++;
        }
        else
        {
            last--;
        }
    }

    return ans;
}
int main()
{
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}