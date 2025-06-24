#include<iostream>
using namespace std;

void Reverse(string &str, int startIndex, int lastIndex){
    if(startIndex >= lastIndex){
        return ;
    }

    char c = str[startIndex];
    str[startIndex] = str[lastIndex];
    str[lastIndex] = c;
    return Reverse(str, startIndex +1, lastIndex - 1);
}
int main()
{
    string str = "saty";
    Reverse(str, 0, str.size()-1);
    cout<<str<<endl;
  return 0;
}