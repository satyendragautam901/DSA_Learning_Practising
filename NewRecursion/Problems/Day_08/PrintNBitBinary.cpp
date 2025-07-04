#include<iostream>
#include<vector>
using namespace std;
/*
Find all N bit binary number where every prefix have equal or more number of 0's.
n = 4 .
1101 so prefix be 1|11|110|1101 So this is printed
1001 so prefix be 1|10|100|1001 so here prefix 3 and prefix 4 have more number of 0's so this must not printed.

*/

void Find(int n, vector<string> &ans, string &temp, int zero, int ones){
    if(temp.size() == n){
        ans.push_back(temp);
        return;
    }

    if(zero < ones){ // zero must be greater than ones
        temp.push_back('0');
        Find(n,ans,temp,zero+1,ones);
        temp.pop_back();
    }
    temp.push_back('1'); // this is for 1's
    Find(n,ans,temp,zero,ones+1);
    temp.pop_back();
}
int main()
{
    int n;

    vector<string>ans;
    string temp;
    Find(4,ans,temp,0,0);

    // print for verification
    for(auto a: ans){
        cout<<a<<" ";
    }
  return 0;
}