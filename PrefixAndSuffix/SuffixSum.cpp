#include<iostream>
#include<vector>
using namespace std;
void PrefixSum(vector<int> &ar){
    vector<int>temp(ar.size());

    int prefix = 0;
    for(int i = 0; i<ar.size(); i++){
       
        prefix+=ar[i];
        temp[i] = prefix;
    }

    // print prefix sum
    for(int a: temp){
        cout<<a<<" ";
    }
}


void SuffixSum(vector<int> &ar){
    int suffix = 0;
    vector<int>temp(ar.size());
    for(int i = ar.size()-1; i>=0; i--){
        suffix+=ar[i];
        temp[i] = suffix;
    }
    for(int a: temp){
        cout<<a<<" ";
    }
}
int main()
{
    vector<int>ar{4,-6,2,8};
    SuffixSum(ar);
  return 0;
}