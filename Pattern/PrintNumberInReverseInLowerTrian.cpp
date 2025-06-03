#include<iostream>
using namespace std;
int main()
{
    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col<=row; col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col<=row; col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // int count = 1;
    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col<=row; col++){
    //         cout<<count<<" ";
    //     }
    //     count++;
    //     cout<<endl;
    // }

    
    // for(int row = 1;row<=5;row++){
    //     for(int col = 1; col<=row; col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int row = 1;row<=5;row++){
        for(int col = row; col>0; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

  return 0;
}