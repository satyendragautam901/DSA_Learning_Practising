#include<iostream>
using namespace std;
void LowerToUpper(string &str, int lastIndex){
    if(lastIndex == -1){
        return ;
    }
    str[lastIndex] = 'A' + str[lastIndex] - 'a';
    LowerToUpper(str, lastIndex - 1);
}
int main()
{
    string str = "sattu";
    LowerToUpper(str, str.size()-1);
    cout<<str<<endl;
  return 0;
}