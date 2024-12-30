#include<iostream>
using namespace std;
void enter(int array[],int size);
void maxmin(int array[],int size,int &index1,int &index2);
void display(int array[],int size);
void swapmaxmin(int array[],int size,int max,int min);


int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    enter( array, n);
    cout<<"Displaying array"<<endl;
    display(array,n);
    int count1 = 0,count2 = 0;
    maxmin( array, n,count1,count2);
    cout<<"Index of maximum value is: "<<count1<<endl;
    cout<<"Index of minimum value is: "<<count2<<endl;
    cout<<"Array after swapping"<<endl;
    swapmaxmin( array, n, count1,count2 );

}

void enter(int array[],int size)
{
    cout<<"Enter the number array: "<<endl;
    for (int i = 0; i<size;i++)
    {
        cin>>array[i];
    }    
}

void display(int array[],int size)
{
       for (int i = 0;i<size;i++)
       {
        cout<<array[i]<<" ";
       }
cout<<endl;
}

void maxmin(int array[],int size,int &index1,int &index2)
{
   
    int max = array[0];
    int min = array[0];
    for (int i = 1;i<size;i++)
    {
        if (array[i]>max)
        {
            max = array[i];
            index1  = i;
        }
        if (array[i]<min)
        {
            min = array[i];
            index2 = i;
        }
    }
    cout<<"Maximum value in array is: "<<max<<endl;
    
    cout<<"Minimum value in array is: "<<min<<endl;
    cout<<"Index of minimum value is: "<<index2<<endl;
}


void swapmaxmin(int array[],int size,int max,int min)
{
      swap(array[max],array[min]);
      display(array,size);
}