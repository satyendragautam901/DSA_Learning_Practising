#include<iostream>
#include<vector>
using namespace std;
/*
{2,3,4} then use as many subset of same number of different number 
target = 6 then 2,2,2 and 2,4 and 3,3 will be subset for this target sum
*/

int tarSum(vector<int> &ar, int index, int target){
    if(target == 0){
        return 1;
    }
    if(index == ar.size() || target<0){
        return 0;
    }

    return tarSum(ar, index + 1, target) + tarSum(ar, index, target - ar[index]); // here to not include with index+1
}
int main()
{
    vector<int> ar{2,3,4};
    cout<<tarSum(ar,0,6);
  return 0;
}