#include<iostream>
#include<vector>
using namespace std;

void LargestSum(vector<int> &ar){
    int maxi = INT8_MIN;

    for(int i = 0; i<ar.size(); i++){
        int prefix = 0;
        for(int j = i; j<ar.size(); j++){
            prefix+=ar[j];
           maxi = max(maxi, prefix);
        }
        cout<<maxi<<" ";
    }
    cout<<endl;
    cout<<maxi<<endl;
}
int main()
{
    vector<int>ar{4,-6,2,8};
    // largest sum in consecutive order
    // 4,-6 or -6 , 2 or 2, 8 or sub array of 3 element or 4 which one have largest sum

    LargestSum(ar);
  return 0;
}