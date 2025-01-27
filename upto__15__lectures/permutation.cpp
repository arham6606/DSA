/*
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    bool result;
    vector<int> vec = {3, 2, 1};
    int n = vec.size() - 1;

    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    if (result)
    {
        sort(vec.begin(), vec.end());
    }

    else
    {

        // cout<<n<<endl;
        for (int i = 0; i < vec.size(); i++)
        {
            int start = i + 1;
            int end = n - i;
            if (start < end)
            {
                swap(vec[start], vec[end]);
                // start = 0;
                // end = 0;
            }
        }
    }

    cout << "{";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
        if (i < n)
        {
            cout << ",";
        }
    }
    cout << "}";
}

*/

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{
    vector<int> vec = {3,2,1};
    int small = -1;

    for (int i = vec.size() - 2; i >= 0; i--)
    {
        if (vec[i] < vec[i + 1])
        {
            small = i;
            break;
        }
    }

    if (small == -1)
    {
        reverse(vec.begin() + small + 1, vec.end());
    }

    else
    {

        for (int j = vec.size() - 1; j >= 0; j--)
        {
            if (vec[j] > vec[small])
            {
                swap(vec[j], vec[small]);
                break;
            }
        }

        reverse(vec.begin() + small + 1, vec.end());
    }

    cout<<"{";

    for(int i =0 ;i<vec.size();i++)
    {
        cout<<vec[i];
        if(i<vec.size()-1)
        {
            cout<<",";
        }
    }
    cout<<"}";
}
