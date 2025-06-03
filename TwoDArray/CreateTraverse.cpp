#include<iostream>
#include<iomanip>
using namespace std;

void Traverse(int ar[][4], int row , int column){
    // this loop changes over row
    for(int i = 0; i<row; i++){
        // this loop for column
        for(int j = 0; j<column; j++){
            cout << setw(3) << ar[i][j];
        }
        
        cout<<endl;
    }
}

void SearchInTwoDim(int ar[][4], int row , int column, int target){
    bool found = false;

    for(int i = 0; i<row; i++){
        // this loop for column
        for(int j = 0; j<column; j++){

            if(ar[i][j] == target){
                cout<<"Element is found "<<" at "<<i<<" "<<j<<endl;
                return;
            }
        }
       
    }
    cout<<"Sorry! "<<endl;

    // if(found){
    //     cout<<"Element is found "<<endl;
    // }
    // else{
    //     cout<<"Sorry! "<<endl;
    // }
}
int main()
{
    int ar[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // 3 ->>> row   4->>>> column
    
    // traverse
    // Traverse(ar, 3,4);
    SearchInTwoDim(ar, 3,4,11);

    
  return 0;
}