#include<iostream>
using namespace std;
int main()
{
    // hard level problems 
    // piramid
    // for(int row = 1;row<=5;row++){
    //     for(int space = 1; space<=5-row;space++){
    //         cout<<"  ";
    //     }
    //     for(int col = 1; col<= 2*row -1 ;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int row = 1; row<=5; row++){
    //   for(int space = 1 ; space<=5-row;space++){
    //     cout<<"  ";
    //   }
    //   for(int col = 1;col<=row;col++){
    //     cout<<col<<" ";
    //   }
    //   for(int col = row-1;col>=1;col--){
    
    //     cout<<col<<" ";
    //   }
    //   cout<<endl;
    // }

    // for(int row = 1; row<=5; row++){
    //   for(int space = 1 ; space<=row-1;space++){
    //     cout<<"  ";
    //   }
    //   for(int col = 1; col <= 2 * (5 - row) + 1; col++){
    //     cout<<"*"<<" ";
    //   }
      
    //   cout<<endl;
    // }

    // no of stars = 2* n -1, where n = no of rows
    // n = 5(rows) , then 2*5-1 = 9

    // int number;
    // cout<<"Enter the no of rows : "<<endl;
    // cin>>number;

    // for(int row = number; row>=1; row--){
    //   for(int space = 1 ; space<= number-row ;space++){
    //     cout<<"  ";
    //   }
    //   for(int col = 1; col <= 2 * row -1; col++){
    //     cout<<"*"<<" ";
    //   }
      
    //   cout<<endl;
    // }

    // for(int row = 4; row>=1;row--){
    //   // pehle 4 stars
    //   for(int col = 1; col<=row;col++){
    //     cout<<"* ";
    //   }

    //   // fir space 

    //   for(int space = 1; space<=8 - 2*row; space++){
    //     cout<<"  ";
    //   }

      
    //   // fir 4 stars
      
    //   for(int col = 1; col<=row;col++){
    //     cout<<"* ";
    //   }
    //   cout<<endl;
      
    // }

    // now row starts from 1 to 4

    // for(int row = 1; row<=4; row++){
    //   for(int col = 1 ; col<=row; col++){
    //     cout<<"* ";
    //   }

    //   // fir space 

    // for(int space = 1; space<=8 - 2*row; space++){
    //   cout<<"  ";
    // }

    // for(int col = 1 ; col<=row; col++){
    //   cout<<"* ";
    // }
    // cout<<endl;
    // }

    // butterfly 

    // upper stars


    // for(int row = 1 ; row<=4; row++){
    //   // first star 

    //   for(int col = 1; col<=row; col++){
    //     cout<<"* ";
    //   }
    //   // space

    //   for(int space = 1; space<= 8- 2 * row; space++){
    //     cout<<"  ";
    //   }

    //   // again stars

    //   for(int col = 1; col<=row; col++){
    //     cout<<"* ";
    //   }
    //   cout<<endl;
    // }

    // // lower stars

    // for(int row = 3; row>=1; row--){
    //   for(int col = 1; col<= row ; col++){
    //     cout<<"* ";
    //   }
    //   for(int space = 1; space<= 8- 2* row; space++){
    //     cout<<"  ";
    //   }

    //   for(int col = 1; col<= row ; col++){
    //     cout<<"* ";
    //   }
    //   cout<<endl;
    // }


    for(int row = 1; row<=4; row++){
      for(int space = 1; space<=4-row; space++){
        cout<<" ";
      }

      for(int col = 1; col<=row; col++){
        cout<<"* ";
      }

      cout<<endl;
    }

    for(int row = 4; row>=1; row--){
      for(int space = 1; space<=4-row; space++){
        cout<<" ";
      }

      for(int col = 1; col<=row; col++){
        cout<<"* ";
      }
      
      cout<<endl;
    }


    
       
  return 0;
}