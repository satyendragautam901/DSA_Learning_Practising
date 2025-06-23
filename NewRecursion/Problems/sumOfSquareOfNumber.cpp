#include<iostream>
using namespace std;

int sumOfSquare(int n){
    if( n == 1){
        return 1;
    }
    return n*n + sumOfSquare(n - 1);
}

int main()
{
    /*
    s(1) = 1
    s(2) = 2*2 + s(1)
    s(3) = 3*3 + s(2) and so on...........
    */

    cout<<sumOfSquare(3);
  return 0;
}