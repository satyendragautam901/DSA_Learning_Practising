#include<iostream>
#include<vector>
using namespace std;
void SlidingWindow(string str) {
    vector<bool> count(256, 0);
    
    int first = 0, second = 0, len = 0;

    while (second < str.size()) {
        // If we find a repeating character...
        while (count[str[second]]) {
            // We move `first` forward and reset
            // until we remove the repeated character.
            count[str[first]] = 0;
            first++;
        }

        // Now we can include the new character safely.
        count[str[second]] = 1;

        // Update maximum length if we got a bigger window
        len = max(len, second - first + 1);

        // Move forward
        second++;
    }
    
    cout << "Max size of substring without repeating is " << len << endl;
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

   string str = "abcdebf";
   SlidingWindow(str);
  return 0;
}