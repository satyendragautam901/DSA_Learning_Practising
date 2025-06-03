#include<iostream>
using namespace std;
void PeakIndexValue(int ar[]){
    int peak;
    for(int i = 1; i<7; i++){
      if(ar[i]>ar[i+1] && ar[i]>ar[i-1]){
        peak = i;
        break;
      }
    }

    cout<<"Mountain index is "<<peak<<" and value is "<<ar[peak]<<endl;
}
void PeakIndexValueBinary(int ar[]){
  int peakvalue ;
  int start = 0;
  int end = 7;
  int mid;
  while (start <= end)
  {
    mid = start + (end - start)/2;

    if(ar[mid] > ar[mid -1] && ar[mid] > ar[mid + 1]){
      peakvalue = mid;
      break;
    }
    else if(ar[mid] < ar[mid + 1]){
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }

  
  cout<<"Mountain index using binary is "<<peakvalue<<" and value is "<<ar[peakvalue]<<endl;
}
int main()
{
    int ar[] = {2,4,6,8,10, 5,1};
    // PeakIndexValue(ar);
    PeakIndexValueBinary(ar);
  return 0;
}