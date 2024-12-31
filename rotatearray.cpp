#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    // size is the array size
    int size = 7;
    // k is the shift to right
    int k = 3;
    // declaring array..
    int array[size] = {1, 2, 3, 4, 5, 6, 7};
    // displaying the original array...
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i < size - 1)
        {
            cout << ",";
        }
    }
    cout << "}\n";
    // now reversing the array...
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    // displaying the reverse array..
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i < size - 1)
        {
            cout << ",";
        }
    }
    cout << "}";
    // reversing the first 3 elements in the array
    int start1 = 0;
    int end1 = k-1;
    while (start < end)
    {
        swap(array[start1],array[end1]);
        start1++;
        end1--;
    }
    //displaying them the first 3 elements in the reversed order
    cout << "\n{";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i < size - 1)
        {
            cout << ",";
        }
    }
    cout << "}";
}