#include<iostream>
#include<vector>
using namespace std;

void CountUnique(string str){
    int i = 0;
    int unique = 0;

    vector<bool>freq(256,0); // to track unique character
    while (i < str.size())
    {
        /*
        int index = int(str[i]); // to find the index of that character
        freq[index] = 1; // mark that index has count once
        */
       

        // above two line code can be same like this
        freq[str[i]] = 1;


        i++;;
    }

    // count unique character
    for(int i = 0; i<256; i++){
        if(freq[i] !=0){
            unique++;
        }
    }
    
    cout<<"The number of unique character is "<<unique<<endl;

    // time complexity for this is O(n) ----> because while loop runs let's suppose n times and for loop runs O(1) means constant time(256)
}
int main()
{
    /*
    find unique character is string it can be small letter, capital letter and any special character or number too;
    */

    string str = "AABCDAFG@#1561=";
    CountUnique(str);
  return 0;
}