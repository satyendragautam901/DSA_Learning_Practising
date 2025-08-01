#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

void FindValue(int row, int col){
    // this row will be row-1 and col will be col-1 for arrangement in formula
    row = row -1;
    col = col-1;
    // formula be like
    // row-1 C col-1
    
    int res = 1;
    for(int i = 0; i<col;i++){
        res = (row - i) * res;
        res = res / (i+1);

    }

    cout<<res<<" ";
}

void PrintSpecificRow(int row){ // this will take O( n * k(col)) time so this is not an efficient solution
    
    for(int i = 1; i<= row; i++){
        FindValue(row, i); // we already know how to print single place so just pass value .
    }
}

void PrintRowEfficient(int row){ // O(n) time
    /*
                        1                       (n = 1)
                    1       1                   (n = 2)
                1       2       1               (n= 3)
            1       3       3       1           (n=4)
        1       4       6       4       1       (n=5)
    1       5       10      10      5       1   (n = 6)  and so on... 

    */
    // for row = 5 . 
    // 5 will be like 5*1/1, 10 5*4/1*2 for making formula easier

    int ans = 1;
    cout<<ans<<" ";
    for(int i = 1; i<row; i++){
        ans = ans * (row - i);
        ans = ans / i;
        cout<<ans<<" ";
    }
}
int NcR(int row, int col){
    
    // formula be like
    // row-1 C col-1
    
    int res = 1;
    for(int i = 0; i<col;i++){
        res = (row - i) * res;
        res = res / (i+1);

    }

    return res;
}

void PrintPascal(int n){ // O(n^3) time
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        vector<int> row;
        for(int j = 0; j <= i; j++){
            row.push_back(NcR(i, j));
        }
        ans.push_back(row);
    }

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// print pascal efficient way
vector<int>Generate(int row){
    long long ans = 1;
    vector<int>ansRow;
    ansRow.push_back(1);

    for(int col = 1; col<row; col++){
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }

    return ansRow;
}

void PrintPascalEfficient(int N){
    vector<vector<int>>ans;

    for(int i = 1; i<=N; i++){
        ans.push_back(Generate(i));
    }

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // FindValue(5,3);
    // cout<<endl;
    PrintPascalEfficient(5); 
  return 0;
}