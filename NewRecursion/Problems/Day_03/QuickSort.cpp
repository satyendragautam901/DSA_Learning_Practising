#include <iostream>
#include <vector>
using namespace std;
/*
Quick sort - It works by take a element as pivot and compare by pivot the lesser/equal are in left side and greater are right side
             1 10 5 2
             Try to consider last element as pivot
             (1) (2) (10 5)
             (1) (2) (5) (10)
             when only one element then stop.
             Time complexity - O(nlogn) avg case
              ""     ""       - O(n^2) worst case
             Space complexity - O(logn) avg case O(n) worst case
*/

int Partition(vector<int> &ar, int start, int end)
{                         // this function arrange array according to pivot
    int position = start; // hold starting index of array

    for (int i = start; i < ar.size(); i++)
    {
        if (ar[i] <= ar[end])
        { // here suppose end at pivot element
            swap(ar[i], ar[position]);
            position++;
        }
    }

    return position - 1;
}

void QuickSort(vector<int> &ar, int start, int end)
{
    if (start >= end)
    { // base condition
        return;
    }

    int pivot = Partition(ar, start, end);
    // call for left side
    QuickSort(ar, start, pivot - 1);

    // for right side
    QuickSort(ar, pivot + 1, end);
}

void PrintArr(vector<int> &ar)
{
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> ar{1, 10, 5, 2, 4};

    cout << "Before merge sort " << endl;
    PrintArr(ar);

    QuickSort(ar, 0, ar.size() - 1);

    cout << "after merge sort " << endl;
    PrintArr(ar);

    return 0;
}