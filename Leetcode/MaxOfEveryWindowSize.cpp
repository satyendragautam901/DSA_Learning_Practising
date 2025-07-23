#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void MaxOf(vector<int>&ar, int k){ // time O(n*k) : TLE(time limit exceed)
    int n = ar.size();
    vector<int>ans;

    for(int i = 0; i<=n-k; i++){ // this loop run till n-k times

        int temp = ar[i];
        for(int j = i; j<i+k; j++){// this till the size of window
            if(ar[j]>temp){
                temp = ar[j];
            }

        }
        ans.push_back(temp);
    }
    for(auto x: ans)
    cout<<x<<" ";
}

void MaxElement(vector<int>&ar, int k ){
    // step1. push k-1 element to deque
    // step2. pop from front if it goes out of scope
    // step3. pop from back if ar[i] > ar[d.back()]. 
    // so only greater element will on front and if lesser element then it will be on back


    int n = ar.size();
    vector<int>ans;
    deque<int>d;

    // step1.
    for(int i = 0; i<k-1; i++){
        if(d.empty()){ // if deque is empty
            d.push_back(i);
        }

        else{// if deque is empty then be careful while pushing

            while (!d.empty() && ar[i] > ar[d.back()] )
            {
                d.pop_back();
            }
            d.push_back(i); // push for furthur check
            
        }
    }

    for(int i = k-1; i<n; i++){
        // pop from back

        while (!d.empty() && ar[i] > ar[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);

        // pop from front
        if(d.front() <=i- k){
            d.pop_front();
        }

        // push front element to ans
        ans.push_back(ar[d.front()]);
        
    }

    for(auto x: ans)
    cout<<x<<" ";

}

int main()
{
    vector<int>ar{4,3,7,5,2,3,1,2,8,7};
    MaxElement(ar,2);
  return 0;
}