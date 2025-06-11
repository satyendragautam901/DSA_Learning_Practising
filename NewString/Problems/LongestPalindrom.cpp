#include<iostream>
#include<vector>
using namespace std;
void LongestPalindrom(string str){
    // a and A treated as different

    // create two vector to count number of occurences
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    int count = 0;
    bool odd = 0; // to check odd number of characters

    // update count in lower and upper vector
    for(int i = 0; i<str.size(); i++){
        
        if(str[i] >='a'){ // if the character belongs to lowercase
            lower[str[i] - 'a']++; // this will update occurence at index position
        }
        else{
            upper[str[i] -'A']++; // if the character is uppercase
        }
    }

    // check if characters occurence 
    for(int i = 0; i<26; i++){
        // if occurence is even in lower vector
        if(lower[i] %2 ==0){
            count+=lower[i];
        }
        else{
            count+=lower[i]-1; // odd will be add only in between 
            odd = 1;
        }

        // if occurence is even in upper vector
        if(upper[i] %2 ==0){
            count+=upper[i];
        }
        else{
            count+=upper[i]-1; // only one odd will be added in the middle of palindrom
            odd = 1;
        }

    }
    cout<<"odd "<<odd<<"count "<<count<<endl;
    cout<<"Longest palindrom size is "<<count + odd<<endl;
}
int main()
{
    // find longest palindrom size
    string str = "aAabcccdAb";
    LongestPalindrom(str);
  return 0;
}