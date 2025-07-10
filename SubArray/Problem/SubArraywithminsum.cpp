#include<iostream>
#include<vector>
using namespace std;
/*
find the sum of min element of all the sub array.
{1,2} : sub array 1,2, and {1,2} so sum be like 1, 2 and 1(it's min among it's subarray)
*/

int MinSubArraySum(vector<int>&ar){
    int n = ar.size(); 
    int sum = 0; 

    for(int i= 0; i<n ; i++){
        int mini = ar[i]; // min element 

        for(int j = i; j<n ; j++){
            mini = min(mini, ar[j]); // find min of 
            sum +=mini;
        }
    }

    return sum;
}
int main()
{
    vector<int>ar{3,1,2,4};
    cout<<MinSubArraySum(ar);
  return 0;
}