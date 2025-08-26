#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    // when there is 0 in while then it breaks


    // while(i){ // 4 3 2 1 0
    //     cout<<--i<<" ";
    // }

    // while(i){ // 5 4 3 2 1
    //     cout<<i--<<" ";
    // }

    // while(--i){ // 4 3 2 1
    //     cout<<i<<" ";
    // }

    // while(i--){ // 4 3 2 1 0
    //     cout<<i<<" ";
    // }

    // while (0) // this will not execute bcz of '0'
    // {
    //     cout<<"This is ";
    // }

    // while (1) // this is always return true 
    // {
    //     cout<<"This is inifinite loop "<<endl;
    // }
    
    int j = 3;
    while (j)
    {
        cout<<--j<<" ";
    }
    

  return 0;
}