#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <typeinfo>
using namespace std;

// convert roman to integer
int ConverToNumber(char ch)
{
    if (ch == 'I')
    {
        return 1;
    }
    else if (ch == 'V')
    {
        return 5;
    }
    else if (ch == 'X')
    {
        return 10;
    }
    else if (ch == 'C')
    {
        return 100;
    }
    else if (ch == 'L')
    {
        return 50;
    }
    else if (ch == 'M')
    {
        return 1000;
    }
    else if (ch == 'D')
    {
        return 500;
    }
    else
    {
        return 0;
    }
}
void RomanToInteger(string str)
{
    int sum = 0; // to track

    for (int i = 0; i < str.size() - 1; i++)
    {
        // check if current index is greater
        if (ConverToNumber(str[i]) >= ConverToNumber(str[i + 1]))
        {
            sum = sum + ConverToNumber(str[i]);
        }

        else
        {
            sum = sum - ConverToNumber(str[i]);
        }
    }

    // now include last index too
    sum = sum + ConverToNumber(str[str.size() - 1]);

    cout << "Roman to integer is " << sum << endl;
}

// ROMAN TO INTEGER
void IntegerToRoman(int num)
{
    string ans = "";

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; // this both array used to
    string symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            num -= values[i];
            ans += symbol[i];
        }
    }
    cout << "Integer to roman is " << ans << endl;
}

// add two string like number
void AddTwoString(string s1, string s2)
{
    string ans = "";
    int carry = 0;

    // assume s2 have less number
    int i2 = s2.size() - 1;
    int i1 = s1.size() - 1;

    while (i2 >= 0)
    {
        int sum = 0;
        sum = sum + s1[i1] - '0' + s2[i2] - '0' + carry; // '0' will convert to integer
        carry = sum / 10;
        cout << carry << " " << sum << endl;
        char ch = '0' + sum % 10; // here sum % 10 provide number so we need to convert into character
        ans += ch;
        i1--;
        i2--;
    }

    // now i1 still have some number
    while (i1 >= 0)
    {
        int sum = s1[i1] - '0' + carry;
        carry = sum / 10;
        char ch = '0' + sum % 10;
        ans += ch;
        i1--;
    }

    // is still carry exist
    // if carry is still left
    if (carry)
    {
        ans += (carry + '0');
    }

    // reverse the answer
    reverse(ans.begin(), ans.end());

    cout << ans << " " << i1 << endl;
}

// sort string
void SortString(string str)
{
    vector<string> ans(10);
    string temp = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (i == str.size() || str[i] == ' ')
        {                                // '' because str[i] is now character
            char position = temp.back(); // extract index;

            // int toInt = int(position); // convert to integer  another method
            int toInt = position - '0'; // convert to integer
            temp.pop_back();            // pop number from temp

            ans[toInt] = temp; // at index toint store temp value;
            temp = "";
        }
        else
        {
            temp.push_back(str[i]);
        }
    }

    // now temp have last index value so it is to arrange
    char ch = temp.back();
    temp.pop_back();
    int pos = ch - '0';
    ans[pos] = temp;

    // cout<<temp<<endl;
    for (auto ch : ans)
    {
        cout << ch << " ";
    }
}

// sliding window
void SlidingWindow(string str)
{
    vector<bool> freq(256, 0); // to track each character

    int first = 0;
    int second = 0;
    int lengthOfSubstring = 0;

    while (second < str.size())
    {
        while (freq[str[second]])
        {
            freq[str[first]] = 0;
            first++;
        }

        freq[str[second]] = 1;

        lengthOfSubstring = max(lengthOfSubstring, second - first + 1);
        second++;
    }
    cout << "\n Length of substring " << lengthOfSubstring << endl;
}

// longest palindrom
void LongestPalindrom(string s1)
{
    vector<int> freq(26, 0);
    int length = 0; // length of palindrom
    bool odd = 0;

    // first count frequency of each character
    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i] - 'a']++; // map a - 0, b-1 and so on..
    }

    // to include length based on count
    for (int i = 0; i < 26; i++)
    {
        if ((freq[i] % 2) == 0)
        { // this will check that count is even
            length = length + freq[i];
        }
        else
        {
            odd = 1;
            length = length + (freq[i] - 1);
        }
    }

    // if odd is true

    cout << "The longest palindrom is " << length + odd << endl;
}

// smallest distinct window
void DistinctWindow(string str)
{
    // step 1: first count number of distinct character
    int distinct = 0; // store number of distinct character
    int length = str.size();   // store length of window

    vector<int> freq(26, 0);

    for (int i = 0; i < str.size(); i++)
    { // this will mark each index that here is character present
        freq[str[i] - 'A']++;
    }

    // count now
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            distinct++;
        }
    }

    // clear the frequency
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    int first = 0;
    int second = 0;
    
    while (second < str.size())
    {
        while (str.size() && distinct) // jab tak distinct exist krta ho
        {
            if(freq[str[second] - 'A'] == 0){
                distinct--;
                
            
            }
            freq[str[second] - 'A']++;
            second++;
         
        }

        length = min(length, second - first);

        while (distinct != 1)
        {
            length = min(length, second - first);
            freq[str[first] - 'A']--;

            if(freq[str[first] - 'A'] == 0){
                distinct++;

            }
            first++;

        }
        

    }
    
    cout<<"Min length of distinct window "<<length<<endl;

}

int main()
{
    // roman to integer
    string str = "MCCXLVIII";
    RomanToInteger(str);

    // integer to roman
    int num = 1248;
    IntegerToRoman(num);

    // add two string
    string num1 = "12345";
    string num2 = "897";
    AddTwoString(num1, num2);

    // sort string
    string sortString = "One2 Two1 Three4 Four3";
    SortString(sortString);

    // sliding window
    string slid = "abcdeaf";
    SlidingWindow(slid);

    // longest palindrom
    string longest = "aabbccdef";
    LongestPalindrom(longest);

    // smallest distinct window
    string dist = "AABBBCBBAC";
    DistinctWindow(dist);
    return 0;
}