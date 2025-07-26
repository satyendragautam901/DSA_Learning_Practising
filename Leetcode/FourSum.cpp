#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void foursum(vector<int> &ar, int target)
{

    int n = ar.size();
    set<vector<int>> ans;

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (ar[i] + ar[j] + ar[k] + ar[l] == target)
                    {
                        vector<int> temp({ar[i], ar[j], ar[k], ar[l]});

                        sort(temp.begin(), temp.end());

                        ans.insert(temp);
                    }
                }
            }
        }
    }

    for (auto triplet : ans)
    {
        for (auto val : triplet)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

void fourSumEfficient(vector<int> &ar, int target)
{
    int n = ar.size();
    vector<vector<int>> ans;

    // first sort the array
    sort(ar.begin(), ar.end());

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && ar[i] == ar[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && ar[j] == ar[j - 1])
            {
                continue;
            }
            int first = j + 1, last = n - 1;

            while (first < last)
            {
                long long sum = 1LL * ar[i] + ar[j] + ar[first] + ar[last]; // Avoid overflow

                if (sum == target)
                {
                    ans.push_back({ar[i], ar[j], ar[first], ar[last]});

                    // remove duplicates in between
                    while (first < last && ar[first] == ar[first + 1])
                        first++;
                    while (first < last && ar[last] == ar[last - 1])
                        last--;

                    first++, last--;
                }
                else if (sum < target)
                {
                    first++;
                }
                else
                {
                    last--;
                }
            }
        }
    }
}
int main()
{
    vector<int> ar{1, 0, -1, 0, -2, 2};
    foursum(ar, 0);
    return 0;
}