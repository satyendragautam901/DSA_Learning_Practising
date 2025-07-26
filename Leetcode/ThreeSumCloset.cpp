#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void ThreeSumClosest(vector<int> &ar, int target){
    int n = ar.size();
    int closest = ar[0] + ar[1] + ar[2]; // assume first closest is 

    for(int i = 0; i<n-2; i++){ // O(n^3) time

        for(int j = i+1; j<n-1; j++){

            for(int k = j+1; k<n; k++){

                int sum = ar[i] + ar[j] + ar[k];

                // a number will be closest to any number if the difference is smaller 

                if(abs(sum - target) < abs(closest - target)){
                    closest = sum;                    
                }
            }
        }
    }

    cout<<"Closest number is "<<closest<<endl;
}

void ThreeSumClosestEfficient(vector<int> &ar, int target){

    int n = ar.size();
    int closest = ar[0] + ar[1] + ar[2];

    sort(ar.begin(), ar.end()); // first step to sort 

    
    for(int i = 0; i<n-2; i++){
        int first = i+1; 
        int last = n-1;

        while (first<last)
        {
            int sum = ar[i] + ar[first] + ar[last];

            if(abs(sum - target) < abs(closest - target)){
                closest = sum;
            }

            else if(sum < target){
                first++;
            }
            else{
                last--;
            }
        }
        
    }

    cout<<"Closest number is "<<closest<<endl;
}
int main()
{
    vector<int>ar{2,3,8,9,10};
    ThreeSumClosestEfficient(ar,16);

  return 0;
}