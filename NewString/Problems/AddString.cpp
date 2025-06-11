#include<iostream>
using namespace std;
void AddString(string s1, string s2){
    int index1 = s1.size()-1;
    int index2 = s2.size()-1;

    int carry = 0;
    string ans;
    // s1 > s2 (assume)
    while (index2>=0)
    {
        int sum = s1[index1] -'0' + s2[index2] - '0' + carry; // to convert in integer form
        carry = sum / 10;
        char ch = '0' + sum % 10;
        ans +=ch;
        index1--;
        index2--;
    }
    // now index1 is remaining
    cout<<index1<<endl;
    while (index1>=0)
    {
        int sum = s1[index1] -'0' +  carry; // convert into integer form
        carry = sum / 10;
        char ch = '0' + sum % 10;
        ans = ch + ans;
        index1--;
    }
    cout<<ans<<endl;
    
    
}
int main()
{
    // "12345" + "897" = "13242"

    string s1 = "19345";
    string s2 = "897";
    AddString(s1, s2);
  return 0;
}