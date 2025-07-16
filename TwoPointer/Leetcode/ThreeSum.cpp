#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void ThreeSum(vector<int> &ar, int target)
{
    int n = ar.size();
    set<vector<int>> ans;

    sort(ar.begin(), ar.end()); // sort input array

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (ar[i] + ar[j] + ar[k] == target)
                {
                    vector<int> temp = {ar[i], ar[j], ar[k]};
                    sort(temp.begin(), temp.end()); // sort triplet
                    ans.insert(temp);               // set will automatically remove duplicates
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

void EfficientThreeSum(vector<int> &ar)
{
    /*
    1. first sort the array
    2. take first element and serach in remaining array, like we do for two sum problem.
    3.
    */
    int n = ar.size();
    vector<vector<int>> ans;
    sort(ar.begin(), ar.end()); // sort the array
    
    for (int i = 0; i < n-2; i++)
    {

        // nase case for remove duplicate
        if (i > 0 && ar[i] == ar[i - 1])
        {
            continue;
        }

        int first = i + 1;
        int last = n - 1;

        while (first < last)
        {
            int sum = ar[i] + ar[first] + ar[last];
            if (sum == 0)
            {
                ans.push_back({ar[i], ar[first], ar[last]});
                first++;
                last--;
            }
            else if (sum < 0)
            {
                first++;
            }
            else
            {
                last--;
            }

            // this loop for duplicate element in between array.
            while (first < last && ar[first] == ar[first+1])
            {
                first++;
            }
            while (first < last && ar[last] == ar[last-1])
            {
                last--;
            }
            
        }
    }
    for (auto row : ans)
    {
        for (auto val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> ar{-1, 0, 1, 2, -1, -4};
    EfficientThreeSum(ar);
    return 0;
}