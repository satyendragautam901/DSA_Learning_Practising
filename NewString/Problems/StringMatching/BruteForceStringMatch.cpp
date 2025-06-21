#include<iostream>
using namespace std;
void StringMatch(string s1, string s2){
    cout<<"String matching starting "<<endl;
    int n1 = s1.size(); // size of string 1
    int n2 = s2.size(); // size of string 2
    int startingIndex;

    for(int i = 0; i<= n1 - n2; i++){ // if not found till n1-n2 then not possible. Time complexity O(n)
        int first = i;
        int second = 0;
        while (second < n2) // try to match till all the size matched. Time complexity O(n)
        {
            if(s1[first] != s2[second]){ // If not matched then break the loop and try from next character.
                break;
            }
            else{ // if match then move first and second
                first++,second++;
            }
        }
        if(second == n2){
            cout<<"Starting matched index is : "<<first - second<<endl;
        }
        

    }

}

int main()
{
    string s1 = "abcadefg";
    string s2 = "def";
    StringMatch(s1,s2);
  return 0;
}