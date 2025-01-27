
//QUESTION: MULTIPLICATION OF ARRAYS

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The number of elements you want to add: ";
    cin>>n;
    int array[n];
    cout<<"Enter the numbers:"<<endl;
    for (int i = 0; i<n;i++)
    {
        
        cin>>array[i];
    }
       cout<<"Dislay the numbers:"<<endl;
    for (int i = 0; i<n;i++)
    {
        cout<<array[i]<<endl;
    }
       int product = 1;

 for (int i = 0 ; i<n; i++)
 {
    product *=array[i];
 }
 cout<<"The multiplication of array is : "<<product<<endl;
}