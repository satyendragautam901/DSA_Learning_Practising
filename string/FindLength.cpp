#include<iostream>
#include<string>

using namespace std;

/*
void FindLength(char name[]){
    int length = 0; 
    for(int i=0; name[i] != '\0' ; i++){
        length++;
    }
    cout<<"Length is "<< length<<endl;
}
*/

// using string 
void FindLength(string name){
    int length = 0; 
    for(int i=0; i<name.length() ; i++){
        length++;
    }
    cout<<"Length is "<< length<<endl;
}


int main()
{
    string mera_name = "Sattu kumar";
    // string mera_name = "Satue";
    FindLength(mera_name);

  return 0;
}