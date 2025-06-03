#include<iostream>
#include<vector>
using namespace std;

// create array
void createDescArray(vector<int> &arr){
    for(int i = 10; i>1; i--){
        arr.push_back(i+2);
    }
}

void createIncArray(vector<int> &arr){
    for(int i = 1; i<10; i++){
        arr.push_back(i+2);
    }
}

// decreasing binary search

bool BinarySearchDesc(vector<int> &arr , int key){
    int start = 0;
    int end = arr.size() - 1;
    

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return true;
            
        }
        // key is greater ------> left side
        else if(key > arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return false;
}

bool BinarySearchInc(vector<int> &arr, int key){
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return true;
        }

        // if key is greater than mid ------ right side
        else if(arr[mid] < key){
            start = mid + 1;
        }

        // left side
        else {
            end = mid - 1;
        }
    }

    return false;
    
}

// traverse array
void PrintArray(vector<int> &arr){
    for(int a : arr){
        cout<<a<<" ";
    }
}


int main()
{
    vector<int>arr;
    
    // create array
    // createDescArray(arr);

   createIncArray(arr);

   // traverse array
   PrintArray(arr);
    cout<<endl;

   // binary search
   /*
   if(BinarySearchDesc(arr, 15)){
    cout<<"Element is found "<<endl;
   }
   else{
    cout<<"Sorry, element is not found "<<endl;
   }
   */

   if(BinarySearchInc(arr, 20)){
    cout<<"Element is found "<<endl;
   }
   else{
    cout<<"Element is not found "<<endl;
   }


    
  return 0;
}