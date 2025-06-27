#include<iostream>
#include<vector>
using namespace std;

// merge function 
void merge(vector<int>&ar, int start, int end, int mid){
  vector<int>temp(end - start + 1); // to store shorted array

  int i = start;
  int j = mid + 1; 
  int index = 0;

  while (i<=mid && j<=end)
  {
    if(ar[i] <= ar[j]){ // // if i wala value lesser ho
      temp[index] = ar[i];
      index++;
      i++;
    }

    else{ // if j wala value lesser ho
      temp[index] = ar[j];
      index++;
      j++;
    }
  }

  // assume some element left 

  while (i<=mid) // left from i wala array
  {
    temp[index] = ar[i];
    index++;
    i++;
  }
  // cout<<j<<" value of j "<<ar[j]<<endl;
  while (j<=end) // left from j wala array
  {
    temp[index] = ar[j];
    // cout<<temp[index]<<endl;
    index++;
    j++;
  }
  
  // now copy element to original array
  index = 0; // make index to 0 index
  while (start <= end)
  {
    ar[start] = temp[index];
    start++;
    index++;
  }

  // for(int i = 0; i<temp.size(); i++){
  //   cout<<temp[i]<<" ";
  // }
  // cout<<"======="<<endl;
  
  
}

/*
merge sort - works like divide the array and till it remains single.
             then start merging by comparing .
             first left side will be sorted and it will inform it's parent and now right sorted will be handled.
             if there is only single element then it must be sorted . our algorith will stop for single element
*/

void MergeSort(vector<int>&ar, int start, int end){
    if(start == end){
        return;
    }
    int mid = start + (end - start)/2;

    
    /*
    left division will calling until it gets return then come to it's upper and call for right. this is the work flow of recursion .
    1 10 5 2
    1 10 | 5 2
    1| 10 | 5 | 2
    
    */

   // left division
    MergeSort(ar, start, mid);

    // right division
    MergeSort(ar,mid+1, end);

    // merge function this will merge two sorted array
    merge(ar, start, end , mid);
    
}
void PrintArr(vector<int>&ar){
  for(int i = 0; i<ar.size(); i++){
    cout<<ar[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  vector<int>ar{1,10,5,2,4};

  cout<<"Before merge sort "<<endl;
  PrintArr(ar);
  MergeSort(ar,0,ar.size()-1);
  cout<<"after merge sort "<<endl;
  PrintArr(ar);

  return 0;
}