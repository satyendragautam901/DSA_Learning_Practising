#include <iostream>
#include <vector>
using namespace std;

void MissingNumber(vector<int> &ar, int k)
{
    int missing_Number;
    int i = 0;
    for(int j = 1; j<ar.size(); j++){
        if(j ==ar[i]){
            i++;
            continue;
        }
        else{
            missing_Number = j;
        }
        cout<<missing_Number<<" ";
        
    }

    // cout << missing_Number << endl;
}
int main()
{
    vector<int> ar{6, 7, 8, 9};
    MissingNumber(ar, 6);
    return 0;
}