
// THIS IS MY TEST FOR KADANE ALGORITHM

// QUESTION:1
// MAXIMUM SUB-ARRAY SUM

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <climits>
int main()
{
    vector<int> vec = {1, 2, -1, 2, -3, 4};
    int result = INT_MIN;
    int current = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        current += vec[i];
        result = max(result, current);
        if (current < 0)
        {
            current = 0;
        }
    }
    cout << "The maximum Sub-Array sum is: " << result;
}

// QUESTION:2
// POSITIVE ARRAY
/*
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <climits>

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum = max(sum,sum+vec[i]);
    }
    cout<<"The sum of the array: "<<sum;
}
*/

// QUESTION:3
// MIXED ARRAY
/*
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <climits>

int main()
{
    vector<int> vec = {3, -2, 5, -1};
    int sum = INT_MIN;
    int current = 0 ;
    for (int i = 0; i < vec.size(); i++)
  //  {
      //  curren
    //}
}
*/