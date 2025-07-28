#include <iostream>
#include <vector>
using namespace std;
int lengthOfLastWord(string s)
{
    int n = s.length();
    int i = n - 1;

    // Step 1: Skip till spaces are
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }
    // till here i reach to last letter of last word or -1.

    // Step 2: Count length of the last word
    int length = 0;
    while (i >= 0 && s[i] != ' ')
    {
        length++;
        i--;
    }

    return length;
}

int main()
{
    string s = "Hello World";
    cout<<"length of last word is : "<<lengthOfLastWord(s);
    return 0;
}