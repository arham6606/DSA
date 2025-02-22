#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> vec = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int start = 0;
    int end = vec.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (vec[mid] == target)
        {
            cout << "The index will be: " << mid << endl;
            return 0 ;
        }

        if (vec[start] <= vec[mid])
        {
            // Check if target is in the left sorted half
            if (vec[start] <= target && target <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            // Check if target is in the right sorted half
            if (vec[mid] <= target && target <= vec[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

    }
    cout<<"No target found"<<endl;
    return 0;
}