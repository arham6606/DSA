
// QUESTION: CONTAINER WITH MOST WATER
// BRUTE FORCE

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
int main()
{
    // test cases
    // vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> vec = {1, 2, 3, 4, 5};

    int length, width, max_water = 0, ans;

    for (int i = 0; i < vec.size(); i++)
    {

        for (int j = 0; j < vec.size(); j++)
        {
            if (i != j)
            {
                length = min(vec[i], vec[j]);
                width = j - i;
                ans = length * width;
                max_water = max(max_water, ans);
                cout << max_water << endl;
            }
        }
    }

    cout << "The maximum water in a container can be: " << max_water;
}
*/

// OPTIMIZE APPROACH

int main()
{
    int max_water = 0;
    vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int start = 0;
    int end = vec.size() - 1;
    while (start < end)
    {
        int lenght = min(vec[start], vec[end]);
        int width = end - start;
        int ans = width * lenght;
        max_water = max(max_water, ans);

        if (vec[start] < vec[end])
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout << "The maximum water in a container can be: " << max_water;
}