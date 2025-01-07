#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// function declaration
int min(vector<int> &vec);
// execution
int main()
{
    // making the vector
    vector<int> vec = {-1,-3,-10,0,60};
    int answer = min(vec);
    cout << "The minimum product subarray will be: " << answer << endl;
}

int min(vector<int> &vec)
{

    if (vec.empty())
    {
        return 0;
    }
    // declaration variables
    int min_p = vec[0];
    int max_p = vec[0];
    int result = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == 0)
        {
            max_p = 0;
            min_p = 0;
            result = min(result, 0); // Zero itself might be the smallest product
            continue;
        }

        if (vec[i] < 0)
        {
            swap(max_p, min_p);
        }
        max_p = max(vec[i], max_p * vec[i]);
        min_p = min(vec[i], min_p * vec[i]);
        result = min(result, min_p);
    }
    return result;
}