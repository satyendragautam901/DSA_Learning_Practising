#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void threeSum(vector<int>&ar){
    int n = ar.size();
    set<vector<int>>ans;

    for(int i = 0; i<n-2; i++){ // O(n^3) time
        for(int j = i+1; j<n-1; j++){
            for(int k = j+1; k<n; k++){

                if(ar[i] + ar[j] + ar[k] == 0){
                    vector<int>temp{ar[i], ar[j], ar[k]};// temporary array

                    sort(temp.begin(), temp.end()); // sort to avoid duplicate element.

                    ans.insert(temp); // set will remove duplicates.
                }
            }
        }
    }

    for (auto triplet : ans)
    {
        for (auto val : triplet)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

void EfficientThreeSum(vector<int>&ar){
    int n = ar.size();
    vector<vector<int>>ans; // holds actual ans

    // step 1. run loop till n-2 . --> first sort the array.
    // step 2. find the value as we are doing in two sum . take first and subtract and try to find for remaining
    // step 3. if sum == 0, push into ans and first++, last-- for another result
    // step 4. if sum < 0 then first++.
    // step 5. if sum>0 then last--;

    sort(ar.begin(), ar.end()); // sort the array

    for(int i = 0; i<n-2; i++){

        // skip duplicate element if
        if(i>0 && ar[i] == ar[i-1]){ // it tells that i have been used once don't use again.
            continue;
        }

        int start = i+1; 
        int end = n-1; 

        while (start<end)
        {
            int sum = ar[i] + ar[start] + ar[end];

            if(sum == 0){
                ans.push_back({ar[i],ar[start], ar[end]});

                // check for duplicate in between

                while (start < end && ar[start] == ar[start + 1])
                {
                    start++;
                }
                while (start < end && ar[end] == ar[end - 1])
                {
                    end--;
                }
                start++, end--;
            }
            else if(sum< 0){
                start++;
            }
            else{
                end--;
            }

            
            
        }
        
    }

    for (auto triplet : ans)
    {
        for (auto val : triplet)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int>ar{-1,0,1,2,-1,-4};
    EfficientThreeSum(ar);
  return 0;
}