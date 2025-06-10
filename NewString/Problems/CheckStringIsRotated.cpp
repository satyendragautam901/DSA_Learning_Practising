#include<iostream>
using namespace std;

void ClockWiseRotation(string str){
    int length = str.length();
    cout<<length<<endl;
    char temp = str[length-1];

    int i = length - 1;
    for(i; i>=0; i--){
        str[i] = str[i-1];
    }
    str[0] = temp;
    cout<<str<<endl;
    
}

void AntiClockWise(string str){
    cout<<"Anticlockwise \n";
    char temp = str[0];

    for(int i = 1; i<str.length(); i++){
        str[i-1] = str[i];

    }
    str[str.length()-1] = temp;

    cout<<str<<endl;
}
int main()
{
    /*
    Check if a string is rotated by 2 places or not. This may be clock wise or anticlock wise
    */
    string str = "abcd";
    ClockWiseRotation(str);
    AntiClockWise(str);
  return 0;
}