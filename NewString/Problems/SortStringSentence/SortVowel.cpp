#include<iostream>
#include<algorithm>
using namespace std;
void Sortvowel(string str){
    string temp;
    // find vowel
    for(int i = 0; i<str.size(); i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'){
            temp.push_back(str[i]);
        }
    }

    // sort vowel
    sort(temp.begin(), temp.end());

    // replace vowel in original string
    int pos = 0;

    for(int i = 0; i<str.size(); i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'){
            str[i] = temp[pos];
            pos++;
        }
    }

    cout<<str<<endl;
}
int main()
{
    // Ramishe ---> Rameshi . 
    /*
    step 1: find vowel 
    step 2: arrange vowel 
    step 3: traverse in original string and replace vowel with arranged string
    */

    // string str = "Ramishe";
    string str = "leetcode";
    Sortvowel(str);
  return 0;
}