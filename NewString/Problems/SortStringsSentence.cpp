#include <iostream>
#include <vector>
using namespace std;

void SortSentence(string str)
{

  vector<string> ans(10); // assuming max 9 words
  string temp = "";

  for (int i = 0; i <= str.size(); i++)
  {
    if (i == str.size() || str[i] == ' ')
    {
      // get position from last character
      char posChar = temp.back();
      
      temp.pop_back(); // remove number from word

      int pos = posChar - '0'; // convert '1' to 1, '2' to 2, etc.

      ans[pos] = temp; // at position temp word will be stored
      temp.clear();
    }
    else
    {
      temp.push_back(str[i]);
    }
  }

  // print sorted sentence
  for (int i = 0; i < ans.size(); i++)
  {
     // first and last places have extra spaces 
    // cout<<ans[i]<<" ";

    if(ans[i]!=""){ // this will remove extra spaces from both side
      cout<<ans[i]<<" ";
    }
  }
  cout << endl;
}
int main()
{
  string str = "One4 trr1 Bye2 Good3";
  SortSentence(str);
  return 0;
}