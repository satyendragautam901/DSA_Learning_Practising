#include<iostream>
using namespace std;
int main()
{

    // two dimensional array 

    // decleration of array

    int Arr[2][2] = {{2,3}, {3, 5}};

    // accessing array 

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<<Arr[i][j]<<" ";
        }
    }
    cout<<endl;
    // decleration of array inside heap;

    int *A[2];
    A[0] = new int[2];
    A[1] = new int[2];

    /*
    // A[0] and A[1] can store only address can't store value 
    int x = 1, y = 2; 

    A[0] = &x;
    A[1] = &y;
    */

    A[0][0] = 0;
    A[0][1] = 1;
    A[1][0] = 2;
    A[1][1] = 3;

    cout<<"Array inside heap  "<<endl;
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout<<A[i][j]<<" ";
        }
    }

    // This is entire array inside heap only pointer inside stack
    cout<<"Intire Array inside heap "<<endl;
    int **Arra;
    Arra = new int*[2];
    Arra[0] = new int[2];
    Arra[1] = new int[2];


  return 0;
}