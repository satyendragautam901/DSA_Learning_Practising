#include<iostream>
#include<vector>
using namespace std;
/*
ToH - if n disk then move n-1 to helper and remaining 1 to destination and only one disk move at a time
*/
void ToH(int n , int source, int helper, int destination){
    // if there is n disk then 2^n-1 function call . Time complexity is O(2^n) and Space complexity O(n) only stack is used no extra memory used.

    if(n == 1){
        // move upper disk 
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks to helper rod via destination(as a temporary rod)
    ToH(n-1, source, destination, helper);

    // Step 2: Move the largest disk to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks from helper to destination via source(as a temporary rod)
    ToH(n-1, helper, source, destination);

}
int main()
{   
    int n = 3;
    ToH(n,1,2,3);
  return 0;
}