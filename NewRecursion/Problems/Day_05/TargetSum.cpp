#include<iostream>
#include<vector>
using namespace std;
/*
Target sum - if any subset which equals to target then return 1
             {1,2,5} if target is 6 then definetly 1,5 subset is fulfill  
            we will follow like this consider 1 for subtract 1 from target and so on...
*/

bool TargetSum(vector<int> &ar,int index, int target){

    if(target == 0){
        return 1; 
    }
    if(index == ar.size() || target < 0){
        return 0;
    }

    return TargetSum(ar,index+1, target) || TargetSum(ar,index+1, target - ar[index]);
}
int main()
{

    vector<int> ar{1,2,5};
    if(TargetSum(ar,0,8)){
        cout<<"Definetly exist "<<endl;
        return 0;
    }
    cout<<"Doesn't exist "<<endl;

  return 0;
}