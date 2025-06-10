#include<iostream>
#include<vector>
using namespace std;

void CheckPanagram(string str){
    // brute force method is take a and search in sentence and so on for b , c, etc.

    // this is another efficient method 
    vector<int>value(26);
    for(int i = 0; i<str.size(); i++){
        int temp = str[i];
        value[temp -'a'] = 1;
    }

    for(int i = 0; i<26; i++){
        if(value[i] ==0){
            cout<<"this is not panagram "<<endl;
            return;
        }
    }
    cout<<"This is panagram "<<endl;


}
int main()
{
    /*
    Panagram means the sentence have all the characters from a to z
    */
   string sentence =  "The quick brown fox jumps over the lazy dog";
   CheckPanagram(sentence);
  return 0;
}