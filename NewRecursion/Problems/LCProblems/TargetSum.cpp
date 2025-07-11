#include<iostream>
#include<vector>
using namespace std;
/*
{1,1,1} , if target = 1 then we can find like this -1+1+1, 1-1+1, 1+1-1.
how many ways we can find the target
*/
int TargetSum(vector<int>& ar, int index, int currentSum, int target) {
    if (index == ar.size()) {
        return currentSum == target ? 1 : 0;
    }

    // Try adding the current number
    int plus = TargetSum(ar, index + 1, currentSum + ar[index], target);

    // Try subtracting the current number
    int minus = TargetSum(ar, index + 1, currentSum - ar[index], target);

    return plus + minus;
}

int main()
{
    vector<int>ar{1,1,1};
    cout<<TargetSum(ar,0,0,3);
  return 0;
}