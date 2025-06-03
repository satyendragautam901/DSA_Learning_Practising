#include<iostream>
using namespace std;

void Reverse(string str){
    string original = str;
    string rev;
    for(int i = str.length() - 1; i>=0; i--){
        rev = rev + str[i];
    }
    cout<<rev<<" " << original <<endl;
    if(original == rev){
        cout<<"This string is palindrome "<<endl;
    }
    else {
        cout<<"This is not a palindrome "<<endl;
    }
}
int main()
{
    string temp = "madam";
    Reverse(temp);
  return 0;
}