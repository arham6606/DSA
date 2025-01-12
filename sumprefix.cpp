
// Problem: Find the sum of a subarray [l, r] using the prefix sum.

#include <iostream>
using namespace std;
#include <vector>

int main()
{
    //creating 2 vectors
    vector<int> vec = {3, 1, 4, 1, 5, 9};
    vector<int> prefix(vec.size(), 1);

    if(vec.empty())
    {
        return 0;
    }
    //these are the indexes which are we going to calculate prefix sum
    int index1 = 1;
    int index2 = 4;
    //this is the ideal condition
    prefix[0] = vec[0];
//This loop is used for calculating the prefix of the vector
    for (int i = 1; i < vec.size(); i++)
    {
        prefix[i] = prefix[i-1] + vec[i];
    }
//this loop is used for displaying the data
    cout << "{";
    //this is used for that comma is not added extra or we can say that for nice formatting
    //of data
    int comma = 0;
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i];
        if (comma < prefix.size() - 1)
        {
            cout << ",";
            comma++;
        }
    }
    cout << "}";
//this  is used for prefix sum
    int sum = prefix[index2] - prefix[index1-1];

    cout<<"The prefix sum will be: "<<sum<<endl;
}