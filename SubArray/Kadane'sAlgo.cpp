#include<iostream>
#include<vector>
using namespace std;
void KadaneAlgo(vector<int> &ar){
    int ans = INT8_MIN; // hold actual result

    int prefix = 0; // used to track sum of subarray
    for(int i = 0; i<ar.size(); i++){
        prefix+=ar[i];
        ans = max(ans, prefix); // copy the max of either ans or prefix(sub array sum)

        if(prefix<0){ // if sub of subarray is negative make it 0
            prefix = 0;
        }
    }

    cout<<ans<<endl;
}
int main()
{
    /*
    Kadane's Algo - It is an algo for finding the subarray with max sum of all the elements

    step 1: start adding from first elements
    step 2: if addition is negative then make it 0
    */
    vector<int>ar{4,-6,2,8};
    KadaneAlgo(ar);
  return 0;
}