#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
// function declaration
int maxprofit(vector<int> &vec);
int main()
{
    // creating the vector
    vector<int> vec = {7, 1, 5, 3, 6, 4};
    // calling the funtions
    int ans = maxprofit(vec);
    cout << "The maximum Profit will be:  " << ans << endl;
}

int maxprofit(vector<int> &vec)
{
    int buy = vec[0];
    int sell = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        if( vec[i] >buy)
        {
             sell = max(sell,vec[i] - buy);
        }
        buy = min(buy,vec[i]);
    }
    return sell;
}