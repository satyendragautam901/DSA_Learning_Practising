#include<iostream>
using namespace std;
void SerachIndexPosition(int ar[], int size, int target){
    int start = 0;
    int end = size;
    int mid;
    int index;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(ar[mid] == target){
            index = mid +1;
            break;
        }
        else if(ar[mid] > target){
            index = mid;
            end = mid -1;
        }
        else {
            start = mid + 1;
        }
    }

    cout<<"To be inserted at position "<<index<<endl;
    
}

int main()
{

    int ar[] = {1,4,6,8,10,12};
    SerachIndexPosition(ar, 6, 10);

  return 0;
}