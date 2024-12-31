#include <iostream>
using namespace std;

int main()
{
    bool result = true;
    int size = 5;
    int array[size] = {1,2,3,4,5};
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            if (array[i] > array[i + 1])
            {
                result = false;
                break;
            }
        }
    }

    if (result)
    {
        cout << "The array is sorted..." << endl;
    }
    else
    {
        cout << "The array is not sorted.." << endl;
    }
}