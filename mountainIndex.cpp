#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> vec = {0, 3, 8, 9, 5, 2};

    int start = 1;
    int end = vec.size() - 2;

    while (start < end)
    {
        int mid = (start + end) / 2;

        if (vec[mid] > vec[mid - 1] && vec[mid] > vec[mid + 1])
        {
            cout << "The highest mountain index will be: " << mid << endl;
            return 0;
        }

        if (vec[mid] > vec[mid - 1])
        {
            start++;
        }

        if (vec[mid] > vec[mid + 1])
        {
            end--;
        }
    }
}