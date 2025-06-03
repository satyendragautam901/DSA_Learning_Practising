#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PairDifference(vector<int> &ar, int target){
    vector<int>ans;
    int start = 0;
    int end = 1;
    while (end < ar.size())
    {
        if(ar[end] - ar[start] == target){
            ans.push_back(ar[start]);
            ans.push_back(ar[end]);
            break;
        }

        // if target is greater
        else if((ar[end] - ar[start]) < target){
            end++;
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
    vector<int>ar{2,7,11,15,27};
    PairDifference(ar, 5);

  return 0;
}