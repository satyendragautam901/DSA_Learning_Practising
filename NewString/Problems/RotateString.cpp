#include<iostream>
using namespace std;

void RotateClockWise(string str, int k){
    // k will decide to not rotate more than length of string 
    k = k % str.length();
    cout<<"Number of rounds to be rotated is "<<k<<endl;

    // substring with k size from last and remaining from front
    string reverse =  str.substr(str.length()-k,k) + str.substr(0,str.length()-k);
    cout<<reverse<<endl;
    
}

void RotateAntiClockWise(string str, int k){
    k = k % str.length();
    cout<<"length "<<str.length()<<" Need to rotate " <<k<<endl;

    string reverse =  str.substr(k,str.length()) + str.substr(0,k);
    // cout<<"Anti clock wise reverse string is "<<reverse<<endl;
    cout<<"substr "<<reverse<<endl;
}
int main()
{
    string name = "RamKumar";
    RotateClockWise(name, 5);

    string anti = "abcd";
    RotateAntiClockWise(anti, 1);
  return 0;
}