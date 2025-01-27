#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> vec = {5, 7, 7, 8, 8, 10};
    sort(vec.begin(), vec.end());
    int target = 8;
    bool check = false;
    int low = 0;
    int high = vec.size() - 1;

    while (low < high)
    {
        if (vec[low] < target)
        {
            low++;
        }

        else if (vec[high] > target)
        {
            high--;
        }

        else if (vec[low] == target || vec[high] == target)
        {
            cout << low << high << endl;
            break;
        }

        if (vec[low] != target && vec[high] != target)
        {
            check = true;
        }
    }
     
     if(check)
     {
        cout<<"no";
     }
   
}