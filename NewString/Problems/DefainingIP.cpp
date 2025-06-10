#include<iostream>
using namespace std;
void Defaining(string str){
    int i = 0;
    while (i<str.length())
    {
        if(str[i] == '.'){
            cout<<"[.]"<<" ";
        }
        else{
            cout<<str[i]<<" ";
        }
        i++;
    }

    // Time complexity = O(n) -> because to traverse all the index
    // Space complexity = O(1) -> auxiliary space 
    
}
int main()
{
    /*
    Defaining IP 
    1.1.1.1 -----> 1[.]1[.]1[.]1
    */
   string ip = "1.1.1.1";
   Defaining(ip);
  return 0;
}