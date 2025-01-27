
//QUESTION: MAXIMUM SUBARRAY PRODUCT USING KADANE ALGORITHM

// header files.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// declaration of the function
int product(vector<int> &vec);

int main()
{
    // creating a vector
    vector<int> vec = {2, 3, -2, 4};
    // calling the function
    int answer = product(vec);
    // displaying the result.
    cout << "The Maximum Sub-Array Product Will be:" << answer;
}

int product(vector<int> &vec)
{
    // if vector is empty
    if (vec.empty())
    {
        return 0;
    }
    
    int max_p = vec[0];
    int min_p = vec[0];
    int result = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        //if encountered zero it resets
        if (vec[i] == 0)
        {
            max_p = 0;
            min_p = 0;
            result = max(result, 0);
            continue;
        }
          // if negative value occurs it swaps the values
        if (vec[i] < 0)
        {
            swap(max_p, min_p);
        }
        //calculating the max subarray product
        max_p = max(vec[i], max_p*vec[i]);
        min_p = min(vec[i], min_p * vec[i]);
        result = max(result, max_p);
    }
    // returning to the functions
    return result;
}