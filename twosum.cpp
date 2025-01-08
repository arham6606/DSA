
// QUESTION : PAIR SUM MATCHES THE TARGET

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int size = 4;
    int array[size] = {7, 11, 11, 15};
    int target = 18;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                if (count > 0)
                {
                    cout << ",";
                }
                cout << "{";
                cout << array[i] << "," << array[j];
                cout << "}";
                count++;
            }
        }
    }
}