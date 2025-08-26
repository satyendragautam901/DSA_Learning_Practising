#include <iostream>
#include<vector>
#include <stdio.h>
using namespace std;
int main()
{

    char s1[7] = "1234", *p;
    cout<<"Printing by for loop "<<endl;
    
    for(int i = 0; i<7; i++){
        cout<<s1[i]<<" ";
    }
    cout<<endl;
    p = s1 + 2;
    *p = '0';
    printf("%s", s1);

    cout<<endl;
    char s2[7] = {'1','2','3','4'};
    printf("%s", s2);


    int ar[7] = {1,2,3,4};
    cout<<endl;
    for(int i = 0; i<7; i++){
        cout<<ar[i]<<" ";
    }
    
    return 0;
}