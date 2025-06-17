#include<iostream>
#include<vector>
using namespace std;
void Compress(string str){
    // step 1: first count frequency of character
    vector<int>freq(26, 0);
    int unique = 0;

    for(int i = 0; i<str.size(); i++){
        freq[str[i] - 'a']++;
        
    }
    // count unique character
    for(int i = 0; i<str.size(); i++){
        if(freq[i] != 0){
            unique= unique + 1;
        }
    }

    string ans = "";
    for(int i = 0; i<26; i++){
        if(freq[i] != 0){ // agar frequency 0 nhi hai

            ans+=char(i + 'a'); // convert to char type
            ans += to_string(freq[i]); // character ke bad count ko add krna
        }
    }

    cout<<ans<<endl;
}
int main()
{
    string str = "aaabbbcccc"; // output be like:  a3b3c4
    // compress string 
    Compress(str);
  return 0;
}