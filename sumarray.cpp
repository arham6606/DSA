
//QUESTION : SUMMING UP THE ARRAY

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
int sum = 0;
    for (int i = 0;i<n;i++)
    {
         sum+=array[i];
    }
    cout<<"Sum of Array is: "<<sum<<endl;

}