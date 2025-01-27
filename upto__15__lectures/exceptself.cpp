
// brute force
#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    // vector<int> ans = {24, 12, 8, 6};
    vector<int> vec = {1, 2, 3, 4};
    int product = 1;

    for (int i = 0; i < vec.size(); i++)
    {
        product *= vec[i];
    }
    // cout<<product;
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = product /vec[i] ;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
}
*/

// second brute force

/*
int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans(vec.size(), 1);
    int product;

    for (int i = 0; i < vec.size(); i++)
    {
        product = 1;
        for (int j = 0; j < vec.size(); j++)
        {
            if (i != j)
            {
                product *= vec[j];
            }
        }
     //   cout << product << endl;
        ans[i] = product;
    }

    for (int k = 0; k < vec.size(); k++)
    {
        cout << ans[k]<<endl;;
    }
}
*/

// optimal approach

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int n = vec.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * vec[i - 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * vec[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
}
