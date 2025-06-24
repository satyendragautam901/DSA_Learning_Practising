#include<iostream>
using namespace std;

int FibonaciiUsingIteration(int n){
    
    if(n<=1){
        return n;
    }
    int prev = 0;
    int curr = 1;
    int fib;
    for(int i = 2; i<=n; i++){
        fib = prev + curr; // fibonacii of next number

        prev = curr; // previous point to current.
        curr = fib; // now current point to next fibonacii number.
    }

    return curr;
}

int FibonaciiUsingRecursion(int n){
    if(n<=1){
        return n;
    }
    return FibonaciiUsingRecursion(n - 1) + FibonaciiUsingRecursion(n - 2);
}
int main()
{
    int n = 5;
    if(n<0){
        cout<<"fiboncaci of negative number not possible";
        return 0;
    }
    cout<<"Fibonacii is "<<FibonaciiUsingRecursion(n);
  return 0;
}