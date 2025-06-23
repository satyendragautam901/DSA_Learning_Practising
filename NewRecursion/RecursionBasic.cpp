#include<iostream>
using namespace std;

void PrintNumber(int n){ // print in reverse order. Printing will be during calling time.
    if(n == 1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    PrintNumber(n-1); // calling function again and again
}

void PrintIncreasingOrder(int n){ // printing will happen during return time. print 1 to n
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    PrintIncreasingOrder(n-1); // calling function again and again
    cout<<n<<" ";
}

void PrintIncreasing(int start, int base){ // print 1 to n
    if(start == base){
        cout<<start<<" ";
        return;
    }
    cout<<start<<" ";
    PrintIncreasing(start + 1, base);

}

void PrintEvenNumber(int n){
    if(n == 2){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    PrintEvenNumber(n-2);
}
int main()
{
    /*
    A function calling again and again itself with a base condition.
    */

    // print number
    int num = 10;
    PrintIncreasing(1,num);
  return 0;
}