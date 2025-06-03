#include<iostream>
#include<string>
using namespace std;

bool isVowel(char c) {
  c = tolower(c);

  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
    return true;
  }
  else return false;
  
  // same logic can be used like professional 

  // return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void Count(char ch[]){
  int count =0;
  // calculate vowels

  /*
  for (int i = 0; ch[i] !='\0'; i++)
  {
    if((ch[i] =='a' || ch[i]=='e' || ch[i]=='i' || ch[i] == 'o' || ch[i] == 'u' ) || (ch[i] =='A' || ch[i]=='E' || ch[i]=='I' || ch[i] == 'O' || ch[i] == 'U' )){
      count++;
    }
  }
  */

  // calculate vowels short method 

  /*
  for (int i = 0; ch[i] !='\0'; i++)
  {
    if(isVowel(ch[i])){
      count++;
    }
  }
  */

  // another method 
  
  /*
  string vowels = "aeiouAEIOU";
  for (int i = 0; ch[i] !='\0'; i++)
  {
    if( vowels.find(ch[i]) != string::npos){
      count++;
    }
  }
  */

  

  cout<<"No of vowels is "<<count;
  
}
int main()
{
  char ch[] = "Ye hai ji mera laptop";
  Count(ch);

  return 0;
}