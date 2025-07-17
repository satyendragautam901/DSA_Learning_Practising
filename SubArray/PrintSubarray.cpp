#include<iostream>
#include<vector>
using namespace std;

// print sub array vertically
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

// print sub array horizontally
void PrintSubArray(vector<int>& ar) {
    int n = ar.size();
    for(int i = 0; i < n; i++) {                // i = length of subarray - 1
        for(int j = 0; j < n - i; j++) {        // j = starting index
            for(int k = j; k < j + i + 1; k++) { // print from j to j+i
                cout << ar[k] << " ";
            }
            cout << endl;
        }
    }
}


int main()
{
    vector<int> ar{3,1,2,4};
    PrintSubArray(ar);
  return 0;
}