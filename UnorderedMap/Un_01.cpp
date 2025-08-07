#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
    //map<string, int> marks; // used to store marks of students
    unordered_map<string, int>marks; // doesn't store in sorted order while map do

    marks["Rahul"] = 50;
    marks["ram"] = 20;
    marks["saty"] = 40;

    // insert element
    marks.insert({"Mira",20});
    marks.insert({{"gautam",100}, {"adi",60}});

    // find element in unordered map
    auto it = marks.find("ram");

    if(it!= marks.end()){
        cout<<"Marks of ram is "<<it->second<<endl;
    }
    else{
        cout<<"ram's marks is not found "<<endl;
    }


    // iterate over un-map
    for(auto a: marks)
        // first return key while second return value
        cout<<a.first<<" "<<a.second<<endl;
  return 0;
}