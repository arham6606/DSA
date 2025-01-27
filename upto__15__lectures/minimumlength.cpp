
// QUESTION: Kadanes with Minimum Length K.

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <climits>

int main()
{
    vector<int> vec = {4, -1, 2, 1};
    int shift = 4;
    int current = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < vec.size(); i++)
    {
        current += vec[i];
        if (i >= shift - 1)
        {
            maxsum = max(maxsum, current);
            current -= vec[i - shift + 1];
        }
    }
    cout << "The largest sum will be: " << maxsum << endl;
}