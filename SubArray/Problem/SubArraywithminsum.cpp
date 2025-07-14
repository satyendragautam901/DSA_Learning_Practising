#include<iostream>
#include<vector>
#include<stack>
using namespace std;
/*
find the sum of min element of all the sub array.
{1,2} : sub array 1,2, and {1,2} so sum be like 1, 2 and 1(it's min among it's subarray)
*/

int MinSubArraySum(vector<int>&ar){
    int n = ar.size(); 
    int sum = 0; 

    for(int i= 0; i<n ; i++){
        int mini = ar[i]; // min element 

        for(int j = i; j<n ; j++){
            mini = min(mini, ar[j]); // find min of 
            sum +=mini;
        }
    }

    return sum;
}

int MinSubUsingStack(vector<int>&ar){
    int n = ar.size();
    vector<int>left(n), right(n);
    stack<int>st;

    // ple(previous left element)
    for(int i = 0 ;i<n; i++){
        while (!st.empty() && ar[st.top()] > ar[i])
        {
            st.pop();
        }

        left[i] = st.empty() ? i+1 : i-st.top();
        st.push(i);
        
    }

    // clear stack
    while (!st.empty())
    {
        st.pop();
    }

    // nle(next left smaller)

    for(int i = n-1; i>=0; i--){
        while (!st.empty() && ar[st.top()] > ar[i])
        {
            st.pop();
        }
        right[i] = st.empty() ? n-i:st.top()-i;
        st.push(i);
    }

    long long sum = 0;
    int mod = 1e9 + 7; // used to avoid overflow 
    for(int i = 0; i<n; i++){
        sum = (sum + (1LL * ar[i] * left[i] * right[i]) % mod)%mod;
    }

    for(auto a: right){
        cout<<a<<" ";
    }
    cout<<endl;
    return sum;


}
int main()
{
    vector<int>ar{3,1,2,4};
    cout<<MinSubArraySum(ar)<<endl;
    cout<<MinSubUsingStack(ar)<<endl;
  return 0;
}