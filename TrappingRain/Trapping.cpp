#include<iostream>
#include<vector>
using namespace std;

void TrappinRainProblem(vector<int> &ar){

    // first and last building can't store any unit of water
    
    int waterFill = 0;
    for(int i = 1; i<ar.size()-1; i++){
        // left max
        int maxleft = ar[i-1];
        for(int j = i-1; j>=0; j--){
            maxleft = max(maxleft, ar[j]);
        }

        // right max
        int rightmax = ar[i+1];
        for(int k = i+1; k<ar.size()-1; k++){
            rightmax = max(rightmax, ar[k]);
            
        }
        if((min(maxleft,rightmax) - ar[i]) >=0){
            waterFill = waterFill + min(maxleft,rightmax) - ar[i];

        }
        else{
            waterFill += 0;
        }
        // cout<<"index "<<i<<" "<<maxleft<<" "<<rightmax<<endl;
    }

    cout<<waterFill<<endl;
}

int main()
{
    vector<int> ar{4,2,0,5,2,6,2,3};
    TrappinRainProblem(ar);
  return 0;
}