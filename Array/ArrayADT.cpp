#include<iostream>
using namespace std;

// create a structur for array

struct ArrayADT
{
    // void printArr(){
    //     cout<<"This is structure for array abstract data type "<<endl;
    // }

    // int stu_id;
    // string name;
    // string address;

    // void Student_details(){
    //     cout<<" id : "<<stu_id <<" name is "<<name<<" address "<<address<<endl;

    // }


    int * Arr;
    int size;
    int length;

    void display(){
        for (int i = 0; i < size; i++)
        {
            cout<<Arr[i]<<" ";
        }
        
    }

};

int main()
{
    // create array adt

//    ArrayADT a1;
//     a1.stu_id = 121;
//     a1.name = "Amit kumar";
//     a1.address = " Prayagraj Uttar Pradesh ";
//     a1.Student_details();
//     a1.printArr();

    ArrayADT arr;
    cout<<"Enter size of an array "<<endl;
    cin>>arr.size;

    arr.Arr = new int[arr.size];

    arr.length = 0;
    int n;
    cout<<"Enter number of elements "<<endl;
    cin>>n;

    for(int i= 0; i<n; i++){
        cin>> arr.Arr[i];  
    }

    arr.display();

    

  return 0;
}