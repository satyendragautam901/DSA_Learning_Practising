#include<iostream>
using namespace std;
int countVowel(string str, int lastIndex){
  if(lastIndex == -1){
    return 0;
  }

  // if this is vowel count this and ask for remainings
  if(str[lastIndex] =='a' || str[lastIndex] == 'e' ||str[lastIndex] =='i' || str[lastIndex] == 'o' || str[lastIndex] =='u'){
    return 1 + countVowel(str, lastIndex - 1);
  }

  // if not vowel
  else {
    return countVowel(str, lastIndex - 1);
  }

}
int main()
{
  string str = "aeiou";
  cout<<"Vowels are "<<countVowel(str,str.size()-1);
  return 0;
}