#include<iostream>
using namespace std;
int main()
{
    // static array 

    int arr[5] = {1,2};
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;

    // dynamic array 

    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 1;
    p[3] = 2;
    p[4] = 1;
    // for(int i = 0; i<5; i++){
    //     cout<<&p[i]<<" ";
    // }
    cout<<endl;
    // cout<<"Pointer is "<<p<<endl;

    // increase size of dynamic arra

    // 1: create a new array of bigger size
    // 2: copy element to newly created array 

    int *q = new int[10]{};
    for(int i = 0; i<5; i++){
        q[i] = p[i];
    }
    

    delete[] p;
    p = nullptr;

    p = q;
    // delete[] q;
    q = nullptr;

    for(int i = 0; i<10; i++){
        cout<<p[i]<<" ";
    }
  return 0;
}