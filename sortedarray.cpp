#include<iostream>
using namespace std;
#include<algorithm>
void enter(int array[],int size);
void display(int array[],int size);
void sorted(int array[],int size);
void duplicate(int array[],int size);


int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array[n];
    cout<<"Entering data in the arrays"<<endl;
    enter(array,n);
    cout<<"displaying values from array.."<<endl;
    display(array,n);
    cout<<"Sorted array will be.."<<endl;
    sorted(array,n);
    display(array,n); 
    cout<<"Unique array..."<<endl;
    duplicate( array, n);
    
}



void enter(int array[],int size)
{
    for (int i = 0 ;i<size;i++)
    {
        cin>>array[i];
    }
}

void display(int array[],int size)
{
    cout<<"{";
    for (int i= 0 ;i<size;i++)
    {
    
        cout<<array[i];
        if(i!=size-1)
        {
            cout<<",";
        }
    }
    cout<<"}"<<endl;
}

void sorted(int array[],int size)
{
   sort(array,array+size);
}


void duplicate(int array[],int size)
{
    int j = 0;
    for (int i = 1;i<size;i++)
    {
        if (array[i]!=array[j])
        {
            j++;
            array[j]= array[i];
        }
    }
    cout<<"The size of the array: "<<j+1<<endl;
    cout<<"{";
    for (int i= 0 ;i<=j;i++)
    {
    
        cout<<array[i];
        if(i!=j)
        {
            cout<<",";
        }
    }
    cout<<"}"<<endl;
}


