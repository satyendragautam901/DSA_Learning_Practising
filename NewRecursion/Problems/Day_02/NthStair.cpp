#include<iostream>
using namespace std;
int NthStairProblem(int n){
    if(n <=1){
        return 1;
    }
    return NthStairProblem(n - 1) + NthStairProblem(n - 2);
}

// using iteration
int StairProblemUsingIteration(int n){
  if(n<=1){
        return 1;
    }
    int prev = 1; // bcz n = 0 
    int curr = 1; // bcz to move from 0 to 1 there is one way.

    int result;
    for(int i = 2; i<=n; i++){
        result = prev + curr; // result of next number

        prev = curr; // previous point to current.
        curr = result; // now current point to next fibonacii number.
    }

    return curr;
}
int main()
{
    int n = 5;
    if(n<0){
        cout<<"fiboncaci of negative number not possible";
        return 0;
    }
    cout<<"Fibonacii is "<<StairProblemUsingIteration(n);
  return 0;
}