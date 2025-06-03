#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

// function 
void VectorSegregate(vector<int> &ar){
    sort(ar.begin(), ar.end());
}
void Traverse(vector<int> &ar){
    for(int a: ar){
        cout<<a<<" ";
    }

}

void CountSegregate(vector<int> &ar){
    int count0=0;
    int count1=0;
    // count numbers of 1s and 0s
    for(int i = 0; i<ar.size(); i++){
        if(ar[i] == 0){
            count0++;
        }
        else{
            count1++;
        }
    }
    cout<<count0<<" "<<count1<<endl;

    // now replace number of 0s and 1s with its index
    for(int i = 0; i<count0; i++){
        ar[i] = 0;
    }

    // for 1
    for(int i = count0; i<ar.size(); i++){
        ar[i] = 1;
    }


}

// using two pointer segregate
void TwoPointerSegregate(vector<int> &ar){
    int start = 0;
    int end = ar.size() - 1;
    while (start < end)
    {
        // assume that 0s will be first and then 1s
        if(ar[start] == 0){
            start++;
        }
        // is start 1 then check end is 0 or 1 
        
        else{
            // if end 0 then end++
            if(ar[end] == 0){
                swap(ar[start], ar[end]);
                start++;
                end--;
            }

            // agar end 1 ho to swap kr do

            else{
                
                end--;
            }
        }
    }
    
}

int main()
{
    vector<int>ar{0,1,0,1,0,1};
    // segregate 0 in left side and 1 right side
    /*
    >>> using sorting(selection sort, bubble sort, insertion sort)
    >>> using sort(ar.begin(), ar.end()) ----> O(nlogn)
    >>> using count ---->O(3n)
    */
   // VectorSegregate(ar);
   
   // count segregate
   // CountSegregate(ar);

   // using two pointers
   TwoPointerSegregate(ar);

   Traverse(ar);
  return 0;
}