#include<iostream>
#include<vector>
using namespace std;

void MaxSum(vector<int> &ar){
    int maxsum = 0;
    for (int  i = 0; i < ar.size(); i++)
    {
        if(maxsum + ar[i]>=0){
            maxsum = maxsum + ar[i];
        }
        else {
            maxsum = 0;
        }
        
    }
    cout<<maxsum<<endl;
}
int main()
{
    vector<int>ar{4,-6,2,8};
    MaxSum(ar);
  return 0;
}