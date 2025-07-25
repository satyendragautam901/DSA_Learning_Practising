#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void TrappingRain(vector<int>&ar){
    int n = ar.size();
    vector<int>left(n); // store the max of left side
    vector<int>right(n); // store the max of right side

    left[0] = 0;
    for(int i = 1; i<n; i++){ // left max : largest max of left side
        left[i] = max(left[i-1], ar[i-1]);
    }

    right[0] = 0;
    for(int i = n-2; i>=0; i--){ // right max: largest max on right side.
        right[i] = max(right[i+1], ar[i+1]);
    }

    int water = 0;
    for(int i = 0; i<n ; i++){
        int minheight = min(left[i], right[i]); // first find minimum height 

        if(minheight - ar[i] >= 0){
            water+=minheight - ar[i]; // water will be store on min of height and left from that height.
        }
    }
    
    cout<<"Max unit of waters can be stored is "<<water<<endl;
}


void leftMax(vector<int>&ar){ // using stack
    stack<int>st;
    int n = ar.size();
    vector<int>left(n,0); 

    for(int i = n-1; i>=0; i--){
        while (!st.empty() && ar[i] > ar[st.top()])
        {
            left[st.top()] = ar[i];
            st.pop();
        }
        st.push(i);
        
    }

    cout<<"left max \n";
    for(auto a: left)
        cout<<a<<" ";
}

void LeftMax_02(vector<int>&ar){ // suing stack
    stack<int>st;
    int n = ar.size();
    vector<int>left(n,0); 

    st.push(0);
    for(int i = 1; i<n; i++){
        while (!st.empty() && ar[i] < ar[st.top()])
        {
            left[i] = ar[st.top()];
            st.pop();
        }
        st.push(i);
        
    }

    cout<<"left max \n";
    for(auto a: left)
        cout<<a<<" ";
}

void rightMax(vector<int>&ar){ 
    
    int n = ar.size();
    vector<int>right(n,0); 

    

    for(int i = n-2; i>=0; i--){
        
        right[i] = max(right[i+1], ar[i+1]);
        
    }

    cout<<"right max \n";
    for(auto a: right)
        cout<<a<<" ";
}

int main()
{
    vector<int>ar{0,1,0,2,1,0,1,3,2,1,2,1};
    TrappingRain(ar);
  return 0;
}