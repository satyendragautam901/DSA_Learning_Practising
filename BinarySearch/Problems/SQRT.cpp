#include<iostream>
#include<vector>
using namespace std;
void FindSquare(int number){
    int square;
    for (int i = 1; i < number; i++)
    {
        if(i * i == number){
            square = i;
            break;
        }
    }
    cout<<"The square root of "<<number<<" is "<<square<<endl;
    
}

void FindSquareBinary(int number){
    int start = 0;
    int end = number;
    int mid;
    int square;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(mid * mid == number){
            square = mid;
            break;
        }

        else if(mid * mid > number){
            square = mid-1;
            end = mid -1;
        }
        else {
            start = mid + 1;
        }
    }

    cout<<"The square of the number is "<<square<<endl;
    
}
int main()
{
    /*
    vector<int> ar = {1, 4, 6, 8, 10, 12};
    for(int x: ar){
        cout<<x<<" ";
    }
    */
 
    int num = 10;

    FindSquare(num);
    cout<<"===================="<<endl;
    FindSquareBinary(num);
  return 0;
}