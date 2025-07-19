#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(5);
    cout<<"Dq top "<<d.front()<<endl;
    cout<<"Dq back "<<d.back()<<endl;

    // even though we can use deque as array
    deque<int>d1{1,2,3,4,5};
    cout<<"value at Index 3 is "<<d1.at(3)<<endl;
    for(auto x: d1){
        cout<<x<<" ";
    }
  return 0;
}