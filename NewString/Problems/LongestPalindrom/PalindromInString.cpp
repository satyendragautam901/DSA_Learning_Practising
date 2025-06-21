#include<iostream>
#include<string>
#include <cctype>
using namespace std;

void CheckPalindrom(string str){
    string original = str;
    string rev = "";

    for (int i = str.size()-1; i >=0 ; i--)
    {
        rev.push_back(str[i]);
    }

    // check palindrom
    if(original == rev){
        cout<<"Palindrom Hai "<<endl;
        return;
    }
    cout<<"Not palindrom "<<endl;
    
}
int main()
{
    string pali = "Madam";
    string ChangeCase = "";

    for(char ch:pali){
        ChangeCase+=tolower(ch);
    }

    CheckPalindrom(ChangeCase);
  return 0;
}