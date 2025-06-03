#include<iostream>

/*
int NaturalSum(int n){
    
    if(n==0){
        return 0;
    }
    return NaturalSum(n-1) + n;

}
*/

// using loop

int NaturalSum(int n){
    int sum =0;
    for(int i = 0; i<=n; i++){
        sum = sum + i;
    }

    // sum = n * (n + 1) / 2 . <------ prefer this -------->

    return sum;

}

// using a static variable 

/*
int NaturalSum(int n){
    static int x =0;
    if(n>0){
        x++;
        return NaturalSum(n-1) + x;
    }
    return 0;

}
*/

using namespace std;
int main()
{
    int number = 10;
    int sum = NaturalSum(number);

    cout<<"the sum is : "<<sum<<endl;
  return 0;
}