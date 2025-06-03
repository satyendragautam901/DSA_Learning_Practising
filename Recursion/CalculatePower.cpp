#include<iostream>
using namespace std;

// int calculatePower(int m, int n){
//     // if m = 2, and n = 5; then 2* 2* 2* 2* 2
//     int result = m;

//     for(int i = 2; i<=n; i++){
//         result = result * m;
//         cout<<result<<" ";
//     }

//     return result;

// }


// recursion 

/*
int calculatePower(int m, int n){
    // if m = 2, and n = 5; then 2* 2* 2* 2* 2
    if (n == 0) {
        return 1;
    }
    // Base case: m^1 = m
    else if (n == 1) {
        return m;
    }
    else{
        return m * calculatePower(m , n-1);
    }

}
*/

// another efficient method

int calculatePower(int m, int n) {
    // Base cases
    if (n == 0) {
        return 1; // Any number raised to the power of 0 is 1
    }
    if (n == 1) {
        return m; // Any number raised to the power of 1 is the number itself
    }
    
    // If n is even
    if (n % 2 == 0) {
        int halfPower = calculatePower(m, n / 2);
        return halfPower * halfPower; // m^(n/2) * m^(n/2)
    }
    // If n is odd
    else {
        return m * calculatePower(m, n - 1); // m * m^(n-1)
    }
}


int main()
{

   cout<<" The power is "<< calculatePower(5,4);
  return 0;
}