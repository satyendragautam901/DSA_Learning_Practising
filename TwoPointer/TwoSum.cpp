#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void LinerTwoSum(vector<int> &ar, int target){
    vector<int>ans;
    for(int i = 0; i<ar.size() - 1; i++){
        for(int j = i+1; j<ar.size(); j++){
            if(ar[i] + ar[j] == target){
                ans.push_back(ar[i]);
                ans.push_back(ar[j]);
                break;
            }
        }
    }

    // print value
    for(int a: ans){
        cout<<a<<" ";
    }
}

void UsingTwoPointer(vector<int> &ar, int target){
    int start = 0; 
    int end = ar.size()-1;
    vector<int>ans;
    while (start < end)
    {
        // if sum of start + end value is target
        if(ar[start] + ar[end] == target){
            ans.push_back(ar[start]);
            ans.push_back(ar[end]);
            break;
        }

        // if sum is greater then end--
        else if( (ar[start] + ar[end]) > target ){
            end--;
        }

        // agar sum chhota hai to start++
        else{
            start++;
        }
    }

    // print value
    for(int a: ans){
        cout<<a<<" ";
    }
}

void UsingLinerAndBinary(vector<int> &ar, int target){
    vector<int> ans;
    for(int i = 0; i<ar.size(); i++){
        int x = target - ar[i];
        // now if x is present then sum is present
        
        // using binary search
        int start = i+1;
        int end = ar.size()-1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if(ar[mid] == x){
                ans.push_back(ar[i]);
                ans.push_back(ar[mid]);
                break;
            }
            else if(ar[mid] < x){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
        
    }
    // print value
    for(int a: ans){
        cout<<a<<" ";
    }
}

int main()
{
    vector<int>ar{2,7,11,15,27};
    // LinerTwoSum(ar, 42);
    UsingLinerAndBinary(ar, 9); // nlogn)
    // UsingTwoPointer(ar, 22);

  return 0;
}