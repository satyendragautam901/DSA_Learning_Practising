#include<iostream>
#include<vector>
using namespace std;

bool LinearSearch(vector<int> ar, int target){ // using for loop . Time complexity O(n)
    for(int i = 0; i<ar.size(); i++){
        if(ar[i] == target){
            return 1;
        }
    }
}

bool EfficientLinearSearch(vector<int> ar, int target){// using for loop . time complexity O(n/2) ~ O(n) but we save cpu time.
    int n = ar.size();
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (ar[i] == target || ar[j] == target) {
            return true;  // Target found
        }
    }
    // i == j (if there's only one element left to check)
    if (ar[n / 2] == target) {
        return true;  // Found at the center
    }
    return false;  // Target not found
}

bool LinearSearchRecursion(vector<int> &ar, int target, int index){ // using recursion
    // if i don't pass array as reference then at every call ar is created it will be extra space.

    if(index == ar.size()){
        return 0;
    }
    if(ar[index] == target){
        return 1;
    }

    return LinearSearchRecursion(ar, target, index + 1);
}
int main()
{
    vector<int>ar{1,2,8,3};
    if(LinearSearchRecursion(ar,10,0)){
        cout<<"Exist "<<endl;
        return 0;
    }
    else{
        cout<<"Does not exist "<<endl;
    }
  return 0;
}