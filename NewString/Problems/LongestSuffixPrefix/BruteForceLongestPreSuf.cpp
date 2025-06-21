#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void LongestPrefixSuffix(string str){
    int length = 0;
    int n = str.size();
    

    for(int i = 0; i<n-1;i++){ // loop will run before n-1. because we don't want to consider complete string. Time complexity O(n)
        string prefix = "";
        string suffix = "";

        for(int pre = 0; pre <= i ; pre++){ // for prefix. Time complexity O(n)
            prefix.push_back(str[pre]);
        }

        for(int suf = n-1; suf>= n-1 -i; suf--){ // for suffix. Time complexity O(n)
            suffix.push_back(str[suf]);
        }
        // reverse suffix
        reverse(suffix.begin(), suffix.end()); // Time complexity O(n)

        // cout<<prefix<<" "<<suffix<<endl;

        if(suffix == prefix){
            length = i + 1; 
        }
    }
    

    cout<<"Length of pre and suff : "<<length<<endl;
    
}
int main()
{
    string str = "ABCABDABCABCABD";
    LongestPrefixSuffix(str);
  return 0;
}