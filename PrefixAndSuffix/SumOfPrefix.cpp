#include <iostream>
#include <vector>
using namespace std;

vector<int> PrefixSum(vector<int> &ar)
{

    vector<int> prefix(ar.size());
    prefix[0] = ar[0];

    for (int i = 1; i < ar.size(); i++)
    {
        prefix[i] = prefix[i - 1] + ar[i];
    }

    return prefix;
}
int main()
{
    // {1,2,3,4}
    // {1,3,5,9} --> this is prefix sum of this array
    // {10,9,7,4} --> this is the suffix sum of this array

    vector<int> ar{1, 2, 3, 4};

    vector<int> c = PrefixSum(ar);
    for (int i = 0; i < ar.size(); i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}