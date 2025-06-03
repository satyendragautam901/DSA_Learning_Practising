#include<iostream>
using namespace std;

/*
int fact(int n){
    if(n ==0){
        return 1;
    }
    else{
        return fact(n-1) * n;
    }
}
*/

// using loop

int fact(int n){
    int fact = 1;
    for(int i = 1; i<=n ; i++){
        fact *= i;
    }
    return fact;
}

int main()
{
    cout<< "Factorial of 5 number is "<<fact(5)<<endl;
  return 0;
}