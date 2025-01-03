#include <iostream>
using namespace std;
#include<algorithm>

int main()
{
    //decalaring the size and array
    int size = 4;
    int array[size] = {3, 4, -1,1};
    //used to separate the positive numbers
    int j = 0;
    //changing the array to store only positive numbers
    for (int i = 0; i < size; i++)
    {
        if(array[i]>0)
        {
            array[j] = array[i];
            j++;
        }
    }
    //displaying the positive array
    cout<<"{";
    for(int i = 0;i<j;i++)
    {
        cout<<array[i];
        if(i<j-1)
        {
            cout<<",";
        }
    }
    cout<<"}";
    sort(array,array+j);
     cout<<"\n{";
    for(int i = 0;i<j;i++)
    {
        cout<<array[i];
        if(i<j-1)
        {
            cout<<",";
        }
    }
    cout<<"}";

    for(int i = 0; i<j;i++)
    {
        for(int j = i+1 ; j<size;i++)
        {
        if(array[i]+1 ==)
        }

    }

}