#include<iostream>
#include<vector>
using namespace std;
void MaxSum(int ar[][4], int row, int col){
    vector<int>ans;

    for(int i = 0; i<row; i++){
        // this loop for column
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum+=ar[i][j];
        }
        ans.push_back(sum);
    }

    int max = 0;
    for(int i = 0; i<ans.size(); i++){
        if(ans[i] >= ans[max]){
            max = i;
        }
    }

    cout<<"This row have max sum "<< max<<endl;
}

void MaxSumWithoutVector(int ar[][4], int row, int col){
    int index = 0;
    int sum = 0;

    for(int i = 0; i<row; i++){
        // this loop for column
        int total = 0;
        for(int j = 0; j<col; j++){
            total+=ar[i][j];
        }
        if(total > sum){
            sum = total;
            index = i;
        }
    }

    cout<<sum <<" "<<index<<endl;
}

int main()
{
    int ar[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    MaxSumWithoutVector(ar, 3, 4);
  return 0;
}