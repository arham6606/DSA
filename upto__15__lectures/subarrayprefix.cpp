
// Continuous Subarray Sum

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    // main variables of this question
    vector<int> vec = {1,2,3};
    int target = 100;
    int sum;
    bool result = false;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > target)
        {
            continue;
        }
        sum = vec[i] + vec[i - 1];

        if (sum == target)
        {
            result = true;
            break;
        }
    }

    if (result)
    {
        cout << "founded";
    }
    else
    {
        cout << "Not founded";
    }
}
