#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void PrintCharString(char ar[]){
    cout<<"Printing string "<<endl;


    int i = 0;
    while (ar[i] != '\0')
    {
        cout<<ar[i]<<" ";
        i++;
    }
    
}

void PrintString(string str){
    cout<<str<<endl;
    for(auto i = str.begin(); i<str.end(); i++){
        cout<<*i<<" ";
    }
    // for(int i = 0; i<str.size(); i++){
    //     cout<<str[i]<<" ";
    // }
    cout<<endl;
    
    
    // size of string
    cout<<"The size of string is "<<str.size()<<endl;

    // length of string 
    cout<<"The length is "<<str.length()<<endl;

    // capacity of string 
    cout<<"The capacity is "<<str.capacity()<<endl;
}

void Concatenate(string s1, string s2){
    // By using + and append there is no space between concatenated string.

    cout<<"The concatenate of two strings is "<<s1 + " " +  s2<<endl;

    // append
    cout<<"Concatenate using append "<<s1.append(" ").append(s2,0,4)<<endl;
}

void Operation(string s1, string s2){
    // <-------------------  push and pop -------------------->
    s1.push_back('L');
    cout<<"After push back "<<s1<<endl;

    // <-------------------  pop -------------------->
    s1.pop_back();
    cout<<"After pop "<<s1<<endl;

    // <-------------------  insert . it will insert at location 2 and 2 letters from ram -------------------->
    cout<<"Insert "<<s1.insert(2, "ram",2)<<endl;

    // <-------------------  replace , starting index and number of characters to be replace string from index -------------------->
    string str="Programming";
    cout<<"Replace "<<str.replace(3,5, "kk")<<endl;

    // <------------------- swap -> swap two strings -------------------->
    string str2 = "Hello World";
    str.swap(str2);

    // now str and str2 value will be interchanged
    cout<<"Swap str "<<str<<endl;
    cout<<"Swap str2 "<<str2<<endl;

    // <---------------------- copy ------------------->
    string name = "RamKumar";
    // this destination should have capacity to hold source
    // string dest = "   ";
    string dest(4, ' ');

    copy(name.begin(),name.end(),dest.begin());
    cout<<"Copy "<<dest<<endl;

    // <---------------- substring -> 	Extract 5 characters starting at index 2 ----------------->
    cout<<"Sunstring "<<name.substr(2,5)<<endl;
    
    // <---------------- compare -------------------->

    cout<<"Compare "<<dest.compare(name)<<endl;

    // <-------------------  at -------------------->
    cout<<"At "<<name.at(0)<<endl;

    
}
int main()
{   
    // This character works same as string 
    // char ar[10] = {'H', 'e', 'l','l','o'};
    // PrintCharString(ar);

    string str = "Hello";
    string str2 = "World!";
    PrintString(str);
    // Concatenate(str, str2);

    // operation on string using built in
    // Operation(str, str2);
  return 0;
}