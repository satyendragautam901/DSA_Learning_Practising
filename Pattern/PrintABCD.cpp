#include<iostream>
using namespace std;
int main()
{
    int count = 1;
    // for (int i = 0; i <=5 ; i++)
    // {
    //    for(int j = 0; j<=5;j++){
    //     cout<<count<<" ";
    //    }
    //    cout<<endl;
    //    count++;
    // }

    int pattern = 97;
    for (int i = 1; i <=5 ; i++)
    {
       for(int j = 5;j>=1 ;j--){
        cout<<char(pattern)<<" ";
        pattern++;
       }

       cout<<endl;
       
    }
    
  return 0;
}