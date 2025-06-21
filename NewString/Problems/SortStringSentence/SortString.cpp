#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void SortString(string str){
    vector<int>freq(26,0);

    for(int i = 0; i<26; i++){
        int temp = str[i]; // temp have ascii value of that character
        freq[temp -'a'] = 1; // at index starting from 0 marked that character have or not
    }

    cout<<"Value "<<freq[6]<<endl;
    // print sorted string
    for(int i = 0; i<26; i++){

        if(freq[i] ==1){ // check at which index value is 1 so only that will be printed
            cout<<char(i + 'a')<<" ";
        }
        else{
            cout<<"";
        }
    }
}
void SortUsingAlgo(string str){
    sort(str.begin(), str.end());
    cout<<str<<endl;
}

int main()
{
    string str = "dabphe";
    SortString(str);
    SortUsingAlgo(str);
  return 0;
}