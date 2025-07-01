#include<iostream>
#include<vector>
using namespace std;

/*
Perfect sum - if there is array {1,2,5,6} then find how many subset may be sum = 8 . so there is 1,2,5 and 2,6
*/

int perfectSum(vector<int> &ar, int index, int target){
    

    if(index == ar.size()){
        if(target == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

    return perfectSum(ar, index + 1, target) + perfectSum(ar, index+1, target-ar[index]); // return left + right side to it's parent
}
int main()
{
    vector<int>ar{1,2,5,6};
    cout<<perfectSum(ar,0,8);
  return 0;
}