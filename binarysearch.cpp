#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> vec = {-1, 0, 3, 4, 5, 9, 12};
    int start = 0, end = vec.size() - 1;
    int target = 12;
    if(vec.empty())
    {
        return 0 ;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (vec[mid] > target)
        {
            end = mid - 1;
        }

        else if (vec[mid] < target)
        {
            start = mid + 1;
        }

        else if (vec[mid] == target)
        {
            cout << "The index will be: " << mid << endl;
            break;
        }
    }
}