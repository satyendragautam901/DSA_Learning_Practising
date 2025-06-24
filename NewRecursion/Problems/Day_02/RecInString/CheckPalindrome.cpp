#include<iostream>
using namespace std;
bool isPalindrome(string str, int start, int end){
    if(start >= end){
        return 1;
    }
    if(str[start] != str[end]){
        return 0;
    }
    return isPalindrome(str,start + 1, end - 1);
}
int main()
{
    string str = "mom";
    if(isPalindrome(str,0,str.size()-1)){
        cout<<"Palindrome hai "<<endl;
        return 0;
    }
    cout<<"Not palindrome "<<endl;
  return 0;
}