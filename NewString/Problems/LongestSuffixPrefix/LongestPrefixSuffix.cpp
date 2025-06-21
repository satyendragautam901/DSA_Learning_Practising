#include<iostream>
#include<vector>
using namespace std;

void LongestPrefixSuffix(string str){
    vector<int>lps(str.size(), 0);

    int pre = 0, suf = 1;
    while (suf < str.size())
    {
        if(str[pre] == str[suf]){ // pre and suff have same character
            lps[suf] = pre + 1; // prefix and suffix have length = pre+1
            pre++;
            suf++;

        } 
        else{ // if pre and suf is not same character
            if(pre ==0){ 
                lps[suf] = 0;
                suf++;
            }
            else{
                pre = lps[pre -1]; // move pre to that index 

            }
        }


    }

    cout<<"The longest prefix and suffix is "<<lps[str.size()-1]<<endl;
    
}
int main()
{
    /*
    In the below string ABCABD  is the longest pre and suff
    */
    string str = "ABCABDABCABCABD";
    LongestPrefixSuffix(str);
  return 0;
}