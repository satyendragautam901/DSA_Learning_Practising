#include <iostream>
#include <vector>
using namespace std;

void PrintSubarray(vector<int> &ar)
{
    for (int i = 0; i < ar.size(); i++)
    {

        for (int j = i; j < ar.size(); j++)
        {

            for (int k = i; k <= j; k++)
            {

                cout << ar[k] << " ";
            }
            cout << endl;
        }
    }
}

void MinElement(vector<int> &ar)
{
    int ans = 0;
    for (int i = 0; i < ar.size(); i++)
    {

        for (int j = i; j < ar.size(); j++)
        {
            int mini = ar[j];

            for (int k = i; k <= j; k++)
            {

                mini = min(mini, ar[k]);
                cout << mini << " ";
            }
            cout << endl;
        }
    }
}
void MinSumOfEverySmallest(vector<int> &ar)
{
    int ans = 0;
    for (int i = 0; i < ar.size(); i++)
    {

        int mini = ar[i];
        for (int j = i; j < ar.size(); j++)
        {
            mini = min(mini, ar[j]);
            ans = ans + mini;
        }
    }
    cout << ans << endl;
}

int main()
{
    vector<int> ar{3, 2, 1, 4};
    MinElement(ar);
    return 0;
}