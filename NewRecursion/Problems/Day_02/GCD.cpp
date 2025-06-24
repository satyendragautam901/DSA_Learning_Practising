#include <iostream>
#include <vector>
using namespace std;
/*
Brute force - n1 = 12 => 1,2,3,4,6,12 , n2 = 18 => 1,2,3,6,9,18 the greatest common divisor is 6.
*/

void BruteForce(int n1, int n2)
{
    vector<int> factors1; // holds factors of number1
    vector<int> factors2; // holds factors of number2

    for (int i = 1; i <= n1; i++)
    { // for number1 O(n)
        if (n1 % i == 0)
        {
            factors1.push_back(i);
        }
    }

    for (int i = 1; i <= n2; i++)
    { // for number2 O(n)
        if (n2 % i == 0)
        {
            factors2.push_back(i);
        }
    }

    int gcd = 1;
    // now find greatest number which divides both
    for (int i = 0; i < factors1.size(); i++)
    {
        for (int j = 0; j < factors2.size(); j++)
        {
            if (factors1[i] == factors2[j])
            {
                gcd = factors1[i];
            }
        }
    }

    cout << "Gcd is " << gcd << endl; // time complexity O(n^2). bcz during comparing it takes longer time
}

void AnotherEfficient(int n1, int n2)
{
    int gcd = 1;

    /*

    for(int i = 1; i<=min(n1,n2); i++){ // if factors of lesser number divides both otherwise greater number factors may not divide lesser then how gcd.
        if(n1 % i == 0 && n2 % i ==0){
            gcd = i;
        }

    }
    */

    // ----------------------------------

    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    cout << "Gcd is " << gcd << endl; // time complexity O(n);
}

// using euclidean algo
int Euclidean(int n1, int n2)
{
    /*
    
    int hcf(int a, int b)
    {
        if (a == 0)
            return b;
        if (b == 0)
            return a;
        if (a == b)
            return a;

        if (a > b)
        {
            return hcf(a % b, b);
        }
        else
            return hcf(b % a, a);
    }
    */

    if (n2 == 0)
    {
        return n1;
    }
    return Euclidean(n2, n1 % n2);
}
int main()
{
    int num1 = 12;
    int num2 = 18;
    // BruteForce(num1, num2);
    // AnotherEfficient(num1,num2);

    cout << "GCD is " << Euclidean(num1, num2);
    return 0;
}