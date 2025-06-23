#include<iostream>
using namespace std;
int sumOfNatural(int n){
    if(n == 1){
        return 1;
    }
    return n + sumOfNatural(n - 1);
}
int main()
{
    /*
    sum(5) = 5 + sum(4)
    sum(4) = 4 + sum(3) and so on.....
    */
   int n = 5;
   cout<<"Sum of "<<n <<" is "<<sumOfNatural(n)<<endl;
  return 0;
}