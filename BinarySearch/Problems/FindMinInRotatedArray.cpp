#include<iostream>
#include<vector>
using namespace std;
void MinInRotatedArray(vector<int> &ar, int k){
    // rotate is happening.

    // left rotate
    while (k)
    {
      int temp = ar[0];
      for(int i = 0; i<ar.size() ; i++){
        ar[i] = ar[i+1];
      }
      ar[ar.size()-1] = temp;

      k--;
    }

    // find min
    int start = 0; 
    int end = ar.size()-1;
    int mid;
    int minValue;
    while (start <= end)
    {
      mid = start + (end - start) / 2;

      if(ar[mid] < ar[mid-1] && ar[mid]<ar[mid + 1]){
        minValue = ar[mid];
        break;
      }
      else if(ar[mid] > ar[mid - 1]){
        start = mid + 1;
      }
      else {
        end = mid - 1;
      }
    }

    cout<<"Min In rotated array is "<<minValue<<endl;
    
}
int main()
{
  vector<int>ar{5,6,7,8,9};
  MinInRotatedArray(ar,2);
  for(int a: ar){
    cout<<a<<" ";
  }
  
  return 0;
}