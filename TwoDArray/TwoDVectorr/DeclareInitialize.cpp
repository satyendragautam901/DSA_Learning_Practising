#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // single array
    vector<int>ar;

    // two d array
    vector<vector<int>>arr;

    // declare + initialization
    vector<vector<int>> matrix(4,vector<int>(4,1));
    
    // row = matrix.size()
    for(int i = 0; i<matrix.size(); i++){
        // col = matrix[0].size()
        for(int j = 0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


  return 0;
}