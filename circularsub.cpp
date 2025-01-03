#include <iostream>
using namespace std;
#include <vector>
#include <climits>
#include<cctype>
// function declaration
void circular(vector<int> &vec);
int main()
{
    // decalaration of vector
    vector<int> vec = {3,-4,2,-3};
    // calling the function
    circular(vec);
}

void circular(vector<int> &vec)
{
    // these variables are for the max and min
    int current = 0;
    int maxs = INT_MIN; //-infinity
    int mins = INT_MAX; //+infinity
    bool result;
    // this is for checking the if array has all negative elements
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < 0)
        {
            result = false;
        }
        else
        {
            result = true;
            break;
        }
    }

     // this is for calculating the maximum subarray
        for (int i = 0; i < vec.size(); i++)
        {

            current += vec[i];
            maxs = max(maxs, current);
            // mins = min(mins,current);
            if (current < 0)
            {
                current = 0;
            }
        }
        //cout << "The maximum subarray is: " << maxs << endl;
        // this is for calculating the minimum subarray
        for (int i = 0; i < vec.size(); i++)
        {
            current += vec[i];
            mins = min(mins, current);
            if (current > 0)
            {
                current = 0;
            }
        }
       // cout << "The minimum subarray is: " << mins << endl;
        // this is for the total sum of the array
        int sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            sum += vec[i];
        }
       // cout << "The total sum of the array is: " << sum << endl;
        int wrapped = sum - mins;


    if (result)
    {
       int res = max(maxs,wrapped);
       cout<<"The maximum circular array will be: "<<res<<endl;
    }

    else
    {
        cout<<"\t\t\t\tAll elements in the array are negative"<<endl;
        //cout<<"The minimum sub array will be: "<<sum<<endl;
        cout<<"The maximum circular subarray will be: "<<maxs<<endl;
    }
}


