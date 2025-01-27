
// QUESTION: MAXIMUM PRODUCT OF 3 NUMBERS IN THE ARRAY

/*#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <climits>
// function declaration
int max3(vector<int> &vec);
int main()
{
    vector<int> vec = {5,4, 3, 2, 1,};
    int answer = max3(vec);
    cout << "The maximum product of 3 number in this array: " << answer << endl;
}

int max3(vector<int> &vec)
{
    int result = 0;
    int count = 0;
    int product = 1;
    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        count++;
        if (count <= 3)
        { 
            product *= vec[i];
            if (count == 3)
            {
                i--;
                result = max(result, product);
                count = 0;
                product = 1;
            }
            
        }
    }
    return result;
}

*/


//gpt___code

#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

// Function declaration
int max3(vector<int> &vec);

int main()
{
    vector<int> vec = {4, 3, 2, 1};
    int answer = max3(vec);
    cout << "The maximum product of 3 numbers in this array: " << answer << endl;
}

int max3(vector<int> &vec)
{
    // Check if the array has at least 3 elements
    if (vec.size() < 3)
    {
        cerr << "Error: Array must have at least 3 elements." << endl;
        return INT_MIN; // Return a sentinel value to indicate an error
    }

    // Sort the array
    sort(vec.begin(), vec.end());

    int n = vec.size();

    // Calculate the two possible maximum products:
    // 1. Product of the three largest numbers
    int product1 = vec[n - 1] * vec[n - 2] * vec[n - 3];

    // 2. Product of the two smallest numbers (negative) and the largest number
    int product2 = vec[0] * vec[1] * vec[n - 1];

    // Return the maximum of these two products
    return max(product1, product2);
}
