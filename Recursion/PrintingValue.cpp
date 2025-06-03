#include<iostream>
using namespace std;

// tail recursion
void printNumber(int num){
    if(num>0){
        cout<<num<<" ";
        printNumber(num-1);
    }
}

// head recursion
// void printNumber(int num){
//     if(num>0){
//         printNumber(num-1);
//         cout<<num<<" ";
//     }
// }
int main()
{
    int number;
    cout<<"Enter Number : "<<endl;
    cin>>number;
    printNumber(number);
  return 0;
}