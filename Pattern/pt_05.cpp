#include<iostream>
using namespace std;
int main()
{
    // first space of 5-row

    for(int row = 1; row <=5; row++){
        for(int space = 1; space<=5-row; space++){
            cout<<"  ";
        }
        for(int col = 1; col<=2*row; col++){
            cout<<"* ";
        }
        cout<<endl;
        
    }

    // for(int row= 1; row<=5; row++){
    //     for(int col = 1; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     for(int space = 1; space<=5-row; space++){
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    
  return 0;
}