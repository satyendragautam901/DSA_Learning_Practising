#include<iostream>
#include<vector>
using namespace std;
void KadaneAlgo(vector<int> &ar){
    int maxi = INT8_MIN;
    int prefix = 0;
    for(int i = 0; i<ar.size(); i++){
        prefix+=ar[i];
        maxi = max(maxi, prefix);
        if(prefix<0){
            prefix = 0;
        }
    }

    cout<<maxi<<endl;
}
int main()
{
    vector<int>ar{4,-6,2,8};
    KadaneAlgo(ar);
  return 0;
}