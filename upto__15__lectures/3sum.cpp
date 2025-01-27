
/*

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    // vector<int> vec = {-1, 0, 1, 2, -1, -4};
    vector<int> vec = {0, 1, 1};
    sort(vec.begin(), vec.end());
    int start;
    int end = vec.size() - 1;
    int sum;
    for (int i = 0; i < vec.size(); i++)
    {
        start = i + 1;
        while (start < end)
        {
            sum = vec[i] + vec[start] + vec[end];

            if (sum > 0)
            {
                end--;
            }

            if (sum < 0)
            {
                start++;
            }

            if (sum == 0)
            {
                cout << "{";
                cout << vec[i] << "," << vec[start] << "," << vec[end];
                cout << "}" << endl;
                start++;
                end--;
            }

        }
    }
}


*/

// gpt code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {-10, -3, 0, 1, 2, 3, 5, 6};
    // vector<int> vec = {0, 1, 1};
    //  Sort the vector to apply two-pointer technique
    sort(vec.begin(), vec.end());
    bool result = false;
    int start, end, sum;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        // Skip duplicates for the first element
        if (i > 0 && vec[i] == vec[i - 1])
            continue;

        start = i + 1;
        end = vec.size() - 1;

        while (start < end)
        {
            sum = vec[i] + vec[start] + vec[end];

            if (sum > 0)
            {
                end--;
            }
            else if (sum < 0)
            {
                start++;
            }
            else
            {
                // Found a valid triplet
                cout << "{" << vec[i] << "," << vec[start] << "," << vec[end] << "}" << endl;
                result = true;
                // Skip duplicates for the second and third elements
                while (start < end && vec[start] == vec[start + 1])
                    start++;
                while (start < end && vec[end] == vec[end - 1])
                    end--;

                // Move pointers for the next potential triplet
                start++;
                end--;
            }
        }
    }
    if (!result)
    {
        cout << "No triplet founded" << endl;
    }

    return 0;
}
