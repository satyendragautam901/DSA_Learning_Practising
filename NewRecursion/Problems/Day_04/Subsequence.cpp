#include <iostream>
#include <vector>
using namespace std;

void subSequence(vector<int> &ar, int index, vector<int> &temp, vector<vector<int>> &ans)
{
    if (index == ar.size())
    {
        ans.push_back(temp);
        return;
    }

    // not cosider current index value
    subSequence(ar, index + 1, temp, ans);

    // consider current idnex value but before goint to right side or next call store current value.

    temp.push_back(ar[index]);
    subSequence(ar, index + 1, temp, ans);

    // empty temporary for next call
    temp.pop_back();
}
int main()
{
    vector<int> ar{1, 2};
    vector<vector<int>> ans;
    vector<int> temp;

    subSequence(ar, 0, temp, ans);

    // print subsequence
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}