#include<iostream>
using namespace std;
void unique(int array[],int size);
void enter(int array[],int size);

int main()
{
    int n=5;
    int array[n];
    enter(array,n);
   unique(array,n);
}

void unique(int array[],int size)
{
    int ar[size];
    for (int i = 0; i<size;i++)
    {
        bool unique = true;
        for (int j = 0 ; j<size;j++)
        {
            if ( i!=j &&array[i] == array[j])
            {
                unique = false;
                  break;
            }

        }
        if (unique)
        {
        cout<<array[i]<<" ";
        }
    }
}

void enter(int array[],int size)
{
    cout<<"Enter the number array: "<<endl;
    for (int i = 0; i<size;i++)
    {
        cin>>array[i];
    }    
}


