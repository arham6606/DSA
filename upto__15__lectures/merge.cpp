
//QUESTION: MERGING BOTH THE ARRAYS

#include <iostream>
using namespace std;

int main()
{
    int size = 3;
    int array1[size] = {1, 3, 5};
    int array2[size] = {2, 4, 6};
    int merge[size + size];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < size && j < size)
    {
        if (array1[i] < array2[j])
        {
            merge[k] = array1[i];
            i++;
            k++;
        }
        else
        {
            merge[k] = array2[j];
            k++;
            j++;
        }
    }
    while(i<size)
    {
        merge[k] = array1[i];
        k++;
        i++;
    }
    while(j<size)
    {
        merge[k] = array2[j];
        k++;
        j++;
    }



        cout<<"{";
        for(int i = 0 ;i<size+size;i++)
        {
            cout<<merge[i];
            if(i<size+size-1)
            {
                cout<<",";
            }
        }
        cout<<"}";
    
}