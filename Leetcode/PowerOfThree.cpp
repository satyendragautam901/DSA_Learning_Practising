#include <iostream>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n <= 0)
    { // if any number less than then definetly it is not
        return false;
    }

    if (n == 1)
    {
        return true;
    }
    // if a number is divisible then check furthur that it will furthur divisible or not
    // for 45 is divible but check furthur again

    if (n % 3 != 0)
    {
        return false;
    }

    return isPowerOfThree(n / 3);
}
int main()
{
    return 0;
}