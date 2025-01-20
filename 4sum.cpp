/*

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    // creating the vector
    // vector<int> vec = {1, 0, -1, 0, -2, 2};
    vector<int> vec = {2, 2, 2, 2, 2};
    // sorting the vector
    sort(vec.begin(), vec.end());
    int sum;
    int target = 8;
    int start;
    int end = vec.size() - 1;
    for (int i = 0; i < vec.size(); i++)
    {
        start = i + 1;
        while (start < end)
        {
            sum = vec[i] + vec[start] + vec[end] + vec[end - 1];

            if (sum > target)
            {
                end--;
            }

            else if (sum < target)
            {
                start++;
            }

            else
            {
                cout << "{" << vec[i] << "," << vec[start] << "," << vec[end] << "," << vec[end - 1] << "}";
                cout << endl;

                while (start < end && vec[start] == vec[start + 1])
                {
                    start++;
                }
                while (start < end && vec[end] == vec[end - 1])
                {
                    end--;
                }
                start++;
                end--;
            }
        }
    }
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {1, 0, -1, 0, -2, 2};
    int target = 0;

    // Sort the array to use two-pointer technique
    sort(vec.begin(), vec.end());

    int n = vec.size();
    if (n < 4)
        return 0; // No quadruplets if fewer than 4 elements

    // Outer loop to fix the first number
    for (int i = 0; i < n - 3; i++)
    {
        // Skip duplicates for the first number
        if (i > 0 && vec[i] == vec[i - 1])
            continue;

        // Second loop to fix the second number
        for (int j = i + 1; j < n - 2; j++)
        {
            // Skip duplicates for the second number
            if (j > i + 1 && vec[j] == vec[j - 1])
                continue;

            // Two-pointer approach for the remaining two numbers
            int start = j + 1;
            int end = n - 1;

            while (start < end)
            {
                int sum = vec[i] + vec[j] + vec[start] + vec[end];

                if (sum == target)
                {
                    // Found a quadruplet
                    cout << "{" << vec[i] << "," << vec[j] << "," << vec[start] << "," << vec[end] << "}" << endl;

                    // Skip duplicates for start and end
                    while (start < end && vec[start] == vec[start + 1])
                        start++;
                    while (start < end && vec[end] == vec[end - 1])
                        end--;

                    // Move both pointers
                    start++;
                    end--;
                }
                else if (sum < target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
    }
    return 0;
}
