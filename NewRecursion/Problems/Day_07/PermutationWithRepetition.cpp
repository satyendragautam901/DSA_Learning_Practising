#include<iostream>
#include<vector>
using namespace std;
/*
If there is {1,2,1} then 1,2,1 | 2,1,1 and 1,1,2
*/
void PermutationWithRepetition(vector<int> &ar, int index, vector<vector<int>> &ans){
    if(index == ar.size()){
        ans.push_back(ar);
        return;
    }

    // this is fresh for each call so that duplicate can't place at same index
    vector<bool>used(21,0); // used to track if any number come to first position then another can't

    for(int i = index; i<ar.size(); i++){

        if(used[ar[i] + 10] == 0){
            swap(ar[i], ar[index]);
            PermutationWithRepetition(ar,index + 1, ans);
            used[ar[i] +10] = 1; // mark that first position is used
            swap(ar[i], ar[index]); // swap back to previous
        }
    }
}

int main()
{
    vector<int>ar{1,2,1};
    vector<vector<int>>ans;
    PermutationWithRepetition(ar,0,ans);

    // print ans for verify
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}