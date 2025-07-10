#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*
{3,1,2,4} NSE {1,-1, -1,-1} or sometimes {1,n,n,n} where n is size of array.
*/

void NSE(vector<int>&ar){
    int n = ar.size(); 
    // vector<int>ans(n,n);
    vector<int>ans(n,-1);

    stack<int>st;

    for(int i = 0; i<n; i++){
        while (!st.empty() && ar[st.top()] > ar[i])
        {
            ans[st.top()] = ar[i];

            st.pop();
        }

        st.push(i);
        
    }

    for(auto a: ans){
        cout<<a<<" ";
    }
}

int main()
{
    vector<int>ar{3,1,2,4};
    NSE(ar);
  return 0;
}