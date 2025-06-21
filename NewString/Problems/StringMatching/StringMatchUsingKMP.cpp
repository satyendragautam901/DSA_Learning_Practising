#include <iostream>
#include <vector>
using namespace std;

// int LongestPrefixSuffix(string str){

//     return lps[str.size()-1];

// }

void StringMatching(string s1, string s2)
{
  vector<int> lps(s2.size(), 0);

  int pre = 0, suf = 1;
  while (suf < s2.size())
  {
    if (s2[pre] == s2[suf])
    {                     // pre and suff have same character
      lps[suf] = pre + 1; // prefix and suffix have length = pre+1
      pre++;
      suf++;
    }
    else
    { // if pre and suf is not same character
      if (pre == 0)
      {
        lps[suf] = 0;
        suf++;
      }
      else
      {
        pre = lps[pre - 1]; // move pre to that index
      }
    }
  }

  // this is for matching

  int first = 0;
  int second = 0;
  while (second < s2.size() && first < s1.size()) // loop will run till both exist
  {
    if (s2[second] == s1[first])
    { // if both character match
      second++;
      first++;
    }
    else
    { // if not match then ..
      if (second == 0)
      {
        first++;
      }
      else
      {
        second = lps[second - 1];
      }
    }
  }

  if (second == s2.size())
  {
    cout << "Matched at " << first - second << endl;
  }
}

int main()
{
  string s1 = "abcdedf";
  string s2 = "def";
  StringMatching(s1, s2);

  return 0;
}