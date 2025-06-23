#include<iostream>
using namespace std;
int PowerOfNumber(int n, int times){
    if(times == 0){
        return 1; // 2^0 =1.
    }
    return n * PowerOfNumber( n,times -1);
}
int main()
{
    /*
    power(2,1) = 2 * 1
    power(2,2,) = 2 * power(2,1)

    */
   int n = 2;
   int numberOfTimes = 5;
   cout<<PowerOfNumber(n, numberOfTimes);
  return 0;
}