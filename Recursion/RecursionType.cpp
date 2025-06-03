#include<iostream>
using namespace std;

// head recursion 

/*
int printNumber(int n){
    if(n>0){
        cout<<n<<" ";
        return printNumber(n-1);
    }
    else
        return 0;
}
*/

// instead of head recursion i can use loop to reduce space 

/*
int printNumber(int n){
    while(n>0){
        cout<<n<<" ";
        n--;
    }
}
*/

// tail recursion 

/*
int printNumber(int n){
    if(n>0){
       printNumber(n-1);
        cout<<n<<" ";
    }
    else
        return 0;
}
*/

// this can't be easily converted using loop but there is way 

// int printNumber(int n){
//     int i= 1;
//     while (i<=n)
//     {
//         cout<<i<<" ";
//         i++;
//     }
    
// }


// int printNumber(int n){
//     if(n>0){
//         cout<<n<<" ";
//         printNumber(n-1);
//         cout<<n<<" ";
//     }
//     else
//         return 0;
// }


// tree recursion 

/*
int printNumber(int n){
    if(n>0){
        cout<<n<<" ";
        printNumber(n-1);
        printNumber(n-1);
    }
    else
        return 0;
}
*/


// indirect recursion

/*
int printNumberA(int n);
int printNumberB(int n);

int printNumberB(int n){
    if(n>0){
        cout<<n<<" ";
        printNumberA(n/2);
        
    }
    else
        return 0;
}

int printNumberA(int n){
    if(n>0){
        cout<<n<<" ";
        printNumberB(n-1);
        
    }
    else
        return 0;
}
*/

// nested recursion

int fun(int n){

    if(n>100){
        return n-10;
    }
    else {
        return fun(fun(n+11));
    }
}



int main()
{   
    int r = 95;
    cout<<"function is going to call "<< fun(r)<<endl;
    // printNumberA(r);
    
    
  return 0;
}