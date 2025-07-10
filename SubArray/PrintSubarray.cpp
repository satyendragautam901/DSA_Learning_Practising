#include<iostream>
#include<vector>
using namespace std;

void PrintSub(vector<int>&ar){
    int n = ar.size();
    for(int i = 0; i < n; ++i) {
        for(int j = i; j < n; ++j) {
            // print subarray from index i to j
            for(int k = i; k <= j; ++k) {
                cout << ar[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    vector<int> ar{3,1,2,4};
    PrintSub(ar);
  return 0;
}