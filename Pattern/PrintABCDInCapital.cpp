#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    // for(int row=1;row<=5;row++){
    //     for(int col = 1; col<=(5-(row-1)); col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    // for(int row = 1; row<=5;row++){
    //   for(int space = 1;space<=5-row;space++){
    //     cout<<"  ";
    //   }

    //   for(int col = 1;col<=row;col++){
    //     cout<<"*"<<" ";
    //   }
    //   cout<<endl;
    // }

  //       *
  //     * * 
  //   * * * 
  // * * * *

  // for(int row = 1; row<=5;row++){
  //   for(int space = 1;space<=5-row;space++){
  //     cout<<"  ";
  //   }

  //   for(int col = 1;col<=row;col++){
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }


//         1 
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// for(int row = 1;row<=5;row++){
//   for(int col = 1;col<=5-row+1;col++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// for(int row = 5;row>=1;row--){
//   for(int col = 1;col<=row;col++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// * * * * * 
// * * * *
// * * *
// * *
// *

// for(int row = 1;row<=5;row++){
//   for(int col = 5;col>=5-row+1;col--){
//     cout<<col<<" ";
//   }
//   cout<<endl;
// }

// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// for(int row = 1;row<=5;row++){
//   for(int col = 1;col<=row;col++){
//     cout<<col<<" ";
//   }
//   cout<<endl;
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

  // for(int row = 1; row<=5;row++){
  //   for(int space = 1;space<=5-row;space++){
  //     cout<<"  ";
  //   }
  //   int ch = 65;
  //   for(int col = 1;col<=row;col++){
  //     cout<<char(ch)<<" ";
  //     ch++;
  //   }
  //   cout<<endl;
  // }
  
  // for(int row = 1;row<=5;row++){
  //   for(int space = 5;space>row;space--){
  //     cout<<"  ";
  //   }
  //   for(int col = 1;col<=row;col++){
  //     cout<<col<<" ";
  //   }
  //   cout<<endl;
  // }

  // 1 
  // 1 2 
  // 1 2 3 
  // 1 2 3 4 
  // 1 2 3 4 5

  for(int row = 1 ; row <=5;row++){

    for(int space = 1;space<=5-row;space++){
      cout<<"  " ;
    }
    int num = 65;
    // for(int col = 1;col<=row;col++){
    //   cout<<char(num)<<" ";
    //   num++;
    // }

    for(char col = 'A';col<='A' + row-1 ;col++){
      cout<<col<<" ";
      num++;
    }
    
    cout<<endl;
  }

  //         A 
  //       A B
  //     A B C
  //   A B C D
  // A B C D E


  return 0;

}