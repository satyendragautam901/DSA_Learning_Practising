#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums) // O(n) time but breack relative order
{
    if (nums.size() == 1)
    {
        return;
    }

    int st = 0;
    int end = nums.size() - 1;

    while (st < end)
    {
        if ((nums[st] == 0 && nums[end] != 0) || (nums[st] != 0 && nums[end] == 0))
        {
            swap(nums[st], nums[end]);
            st++, end--;
        }

        else if (nums[st] == 0 && nums[end] == 0)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
}

void moveZeroesII(vector<int>& ar) {
     int n = ar.size();
    if(n == 1){
        return ;
    }

     for(int i = 0; i<n-1; i++){
        for(int j = i+1;j<n; j++){
            if(ar[i] == 0 && ar[j] !=0){
                swap(ar[i], ar[j]);
                break;
            }
        }
     }
    }

int main()
{
    vector<int>ar{0,1,0,3,12};
    moveZeroes(ar);

    return 0;
}