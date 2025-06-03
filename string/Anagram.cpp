#include<iostream>
#include<algorithm>

using namespace std;

void Anagram(string s1, string s2){
  /*
  if(s1.length() != s2.length()){
    cout<<"Not anagram (length mismatch) "<<endl;
    return;
  }

  bool visited[1000] = {0};

  for(int i=0; i<s1.length(); i++){
      bool found = false;
      for(int j=0; j<s2.length(); j++){
          if(s1[i] == s2[j] && visited[j] == false){
              visited[j] = true; // mark as visited
              found = true;
              break;
          }
      }
      if(found == false){
          cout << "Not anagram" << endl;
          return;
      }
  }

  cout << "This is anagram" << endl;
  */

  // this is simple approach

  /*
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  
  if(s1 == s2){
    cout<<"Anagram"<<endl;
  }
  else cout<<"Not anagram"<<endl;
  */


  // using hash table

  if(s1.length() != s2.length()){
    cout << "Not Anagram (length mismatch)" << endl;
    return;
  }

  int freq[256] = {0};

  for(int i=0; i<s1.length(); i++){
      freq[s1[i]]++;
      freq[s2[i]]--;
  }

  // for(int i=0; i<256; i++){
  //     if(freq[i] != 0){
  //         cout << "Not anagram" << endl;
  //         return;
  //     }
  // }
  // cout << "Anagram hai" << endl;
  for(int a: freq){
    cout<<a<<" ";
  }

}

int main()
{

    string str1 = "medical";
    string str2 = "decimal";
    Anagram(str1, str2);

  return 0;
}