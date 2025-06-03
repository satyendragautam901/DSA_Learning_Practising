#include<iostream>
using namespace std;

void checkDuplicates(string str){
    /*
    for(int i = 0; i<str.length(); i++){
        for(int j = i+1; j<str.length(); j++){
            if(str[i] == str[j]){
                cout<<str[i]<<" ";
                break;
            }
        }
    }
    */

    // another efficient method

    // track each character counter

    int freq[256] = {0};
    for(int i = 0; i<str.length(); i++){
        // if a is come then in 97 index 0 will become 1 and if again come then 1 will be 2 ........
        
        freq[str[i]]++;
    }

    for(int i =0 ; i<256; i++){
        if(freq[i]>1){
            cout<<char(i)<<" ";
        }
    }
}
int main()
{
    string name = "Ramamama";
    checkDuplicates(name);
  return 0;
}