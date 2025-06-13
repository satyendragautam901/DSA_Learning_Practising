#include<iostream>
#include<vector>
using namespace std;
void SlidingWindow(string str){
    vector<bool>count(256,0);
    
    int first = 0, second =0, len = 0;

    while (second <str.size())
    {
        while (count[str[second]]) // repeating character 
        {
            count[str[first]] = 0;
            first++;
        }

        count[str[second]] = 1;
        len = max(len, second - first +1);
        
        second++;
    }
    
    cout<<"max size substringg "<<len<<endl;
}
int main()
{
    /*
    find largest substring in given string
    abcdaef -> bcdeaf( size = 6)
    */

   /*
   sliding window works
    step 1: take first = 0 and second = 0 
    step 2: move second till count !=1
    step 3: if second reach till count = 1 , move first till it reach to second char

   */

   string str = "abcdefbeadf";
   SlidingWindow(str);
  return 0;
}