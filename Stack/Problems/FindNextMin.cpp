#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*
Find next min if no then -1;
{1,3,2} then {-1,2,-1};
*/

void FindNextMin(vector<int> &ar){

    vector<int>ans(ar.size(), -1);
    stack<int>st; // keep track of latest index

    for(int i = 0; i<ar.size(); i++){

        if(st.empty()){ // push w/o hesitation if empty
            cout<<"Stack is empty right now for "<<i<<endl;
            st.push(i); 
        }
        else{
            while (!st.empty() && ar[i] < ar[st.top()]) // if top element is greater then
            {   
                ans[st.top()] = ar[i];
                st.pop();

            }
            st.push(i);
            
        }
    }

    for(auto a: ans){
        cout<<a<<" ";
    }
}

int main()
{
    vector<int>ar{1,9,12,10,14};
    FindNextMin(ar);
  return 0;
}