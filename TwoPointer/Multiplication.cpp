#include<iostream>
#include<vector>
using namespace std;
void MultiplicationUsingTwoPointer(vector<int> &ar, int target){
    int start = 0;
    int end =  ar.size()-1;
    vector<int> ans;

    while (start < end)
    {
        if(ar[start] * ar[end] == target){
            ans.push_back(ar[start]);
            ans.push_back(ar[end]);
            break;
        }

        // agar target chhota hai
        else if(ar[start] * ar[end] > target ){
            end--;
        }
        else{
            start++;
        }
    }

    // print value
    for(int a: ans){
        cout<<a<<" ";
    }
    
}
int main()
{
    vector<int> ar{3,7,8,11,23};
    MultiplicationUsingTwoPointer(ar, 56);
  return 0;
}