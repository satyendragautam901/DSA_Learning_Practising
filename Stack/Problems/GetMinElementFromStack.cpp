#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*
{3,2,4,1} we have to find min at any time , after so many push/pop.

Appoach: create two stack one for original and another for smaller element.
if smaller than the top of smaller element in smaller stack then push into smaller stack.

*/

class GetMin{

  public:
    stack<int>original;
    stack<int>smaller;

    GetMin(){
      
    }

    void push(int x){
      if(original.empty()){ // if stack is empty then push w/o hesitation
        original.push(x);
        smaller.push(x);
      }

      else{
        original.push(x);
        smaller.push(min(x,smaller.top()));
      }
    }

    int pop(){
      if(original.empty()){
        cout<<"Underflow "<<endl;
        return 0;
      }
      else{
        cout<<"popped "<<original.top()<<endl;
        original.pop();
        smaller.pop();
      }
    }

    void getMin(){
      if(!smaller.empty()){
        cout<<"current min "<<smaller.top()<<endl;
        return ;
      }
    }



};

int main()
{
  GetMin g1;
  g1.push(5);
  g1.push(1);
  g1.getMin();

  g1.push(6);
  g1.getMin();// min element
  g1.push(0);
  g1.getMin(); // min element
  return 0;
}