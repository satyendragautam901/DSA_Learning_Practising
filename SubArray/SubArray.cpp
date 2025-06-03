
// SubArray should be contigous order
// {3,2,5,1}
// {3,2} --> this is subarray
// {2,5} --> this is also a subarray

// {2,1} --> this is not a subarray

#include <iostream>
#include <vector>
using namespace std;
void OneSizeSubArr(vector<int> &ar)
{
  vector<int> first;
  vector<int> second;
  vector<int> third;
  vector<int> fourth;

  for (int i = 0; i < ar.size(); i++)
  {
    if (i == 0)
    {
      first.push_back(ar[i]);
    }
    else if (i == 1)
    {
      second.push_back(ar[i]);
    }
    else if (i == 2)
    {
      third.push_back(ar[i]);
    }
    else if (i == 3)
    {
      fourth.push_back(ar[i]);
    }
    else
    {
      cout << "Sorry no index found now " << endl;
    }
  }
}

void OneSize(vector<int> &ar)
{
  for (int a : ar)
  {
    cout << "{ ";
    cout << a;
    cout << " }";
    cout << endl;
  }
}

void TwoSize(vector<int> &ar)
{
  int count = 0;
  cout << "{ ";
  for (int i = 0; i < ar.size(); i++)
  {

    cout << ar[i] << " ";
    count++;
    if (count == 2)
    {
      cout << " }";
      cout << endl;
      count = 0;

      if (i != ar.size() - 1)
      {
        cout << "{ ";
      }
    }
  }
  // if one element
  if (count != 0)
  {
    cout << " }";
  }
}

void KSizeSubArray(vector<int> &ar, int k)
{
  int count = 0;
  cout << "{ ";
  for (int i = 0; i < ar.size(); i++)
  {

    cout << ar[i] << " ";
    count++;
    if (count == k)
    {
      cout << " }";
      cout << endl;
      count = 0;

      if (i != ar.size() - 1)
      {
        cout << "{ ";
      }
    }
  }
  // if one element
  if (count != 0)
  {
    cout << " }";
  }
}

int main()
{
  vector<int> ar{3, 2, 5, 1, 5};

  KSizeSubArray(ar, 5);
  return 0;
}
