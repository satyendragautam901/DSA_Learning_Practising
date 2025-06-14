#include<iostream>
#include<vector>
using namespace std;

void DistinctWindow(string str){
    vector<int>count(256,0);

    int first = 0, second = 0, len = str.size(), diff = 0;// no of different character in strings

    // count distinct character
    while (first < str.size())
    {
        if(count[str[first]] == 0){
            diff++;
        }

        count[str[first]]++; // at that index mark as it visit once
        first++;
    }

    // now make all character frequency = 0
    for(int i = 0; i<256; i++){
        count[i] = 0;
        
    }

    first = 0; // now first points to 0 index
    while (second <str.size())
    {
        // jab tak diff exist krta hai 
        while (diff && str.size())
        {
            if(count[str[second]] == 0){ // only when unique character is found
                diff--;
            }

            count[str[second]]++; // mark that once it is visited eg: if index = 97 then count = 1 then 2 and so on
            second++;

        }
        len = min(len, second - first); // jab tak diff 0 hoga tab tak second next index pe chala jayega
        
        // when diff != 1 
        while (diff != 1)
        {
            len = min(len, second - first);
            count[str[first]]--; // reduce frequency because first is moving

            if(count[str[first]] ==0){ // if any character is missing from unique then increase diff
                diff++; // first will move till it does not found frequency = 0
            }
            first++;
        }
        
    }

    cout<<"the Length of Distinct window size is : "<<len<<endl;
    
}
int main()
{
    /*
    we are trying to find smallest window which have all the character like (BAC)
    
    step 1: first find largest window in which all the character present
    step 2: Now reducing size from index 0 till window is present 
    step 3: If window full character is not found then move second pointer
    */
    string str= "AABBBCBBAC";
    DistinctWindow(str);
  return 0;
}