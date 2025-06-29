#include<iostream>
#include<vector>
using namespace std;
/*
Subsequence- It is same as finding the sets as we learn in class 11
             {1,2} possible sets are {}, {1}, {2}, {1,2}
*/

void subSequence(int ar[], int index, int n , vector<vector<int>> &ans, vector<int>&temp){
    if(index == n){
        ans.push_back(temp);
        return;
    }

    subSequence(ar, index + 1, n, ans, temp); // for not considering
    temp.push_back(ar[index]);
    subSequence(ar, index + 1, n, ans, temp); // considering
    temp.pop_back(); // clear temp vector
}
int main()
{
    int ar[] = {1,2};
    vector<vector<int>> ans;
    vector<int>temp;
    subSequence(ar,0, 2,ans,temp);

    // print subsequence
    for(int i = 0; i < ans.size(); i++) {
    for(int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}

  return 0;
}