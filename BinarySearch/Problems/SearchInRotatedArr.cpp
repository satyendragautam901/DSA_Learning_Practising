#include<iostream>
#include<vector>
using namespace std;

int RotateArray(vector<int> &ar, int k){
    while (k)
    {
        int temp = ar[0];
        for(int i = 0; i<ar.size(); i++){
            ar[i] = ar[i+1];
        }
        ar[ar.size()-1] = temp;
        k--;
    }
    
}

void PrintArray(vector<int> &ar){
    for(int a: ar){
        cout<<a<<" ";
    }
    cout<<endl;
}
int SearchInRotatedArray(vector<int> &ar, int target) {
    int start = 0;
    int end = ar.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (ar[mid] == target) {
            return mid;
        }

        // Left side is sorted
        if (ar[start] <= ar[mid]) {
            if (ar[start] <= target && target < ar[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // Right side is sorted
        else {
            if (ar[mid] < target && target <= ar[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1; // Target not found
}


void CheckSortedArray(vector<int>& ar) {
    int start = 0;
    int end = ar.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (ar[start] <= ar[mid]) {
            cout << "Left side is sorted" << endl;
        } else {
            cout << "Right side is sorted" << endl;
        }
        break; // Just checking once
    }
}


int main()
{
    vector<int>ar{5,6,7,8,9};
    RotateArray(ar,2);
    PrintArray(ar);
    // CheckSortedArray(ar);
    int c = SearchInRotatedArray(ar,10);
    cout<<c<<" is the index of target "<<endl;

  return 0;
}