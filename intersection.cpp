#include<iostream>
using namespace std;

void intersection(int array[],int array1[],int size);

int main()
{
    int n = 5;
    int array[n] = {7,4,3,5,6} ;
    int array1[n]= { 1,2,4,7,8 };
   intersection( array, array1, n);

}

void intersection(int array[],int array1[],int size)
{
    

    for(int i = 0; i<size; i++)
    {
        for(int j = 0 ; j<size;j++)
        {
            if (array[i]==array1[j])
            {
                cout<<"("<<array[i]<<")";
                 break;
            }
        }
    }

   
}