
//QUESTION: THE MAXIMUM SUBARRAY SUM USING KADANE ALGORITHM

#include<iostream>
using namespace std;
#include<climits>
#include<vector>
//function declaration 
int subarray(vector<int>&vec);

int main()
{
    vector<int> vec = {5,4,-1,7,8};
    int result = subarray(vec);
    cout<<"The maximum subarray sum is: "<<result;
}

int subarray(vector<int>&vec)
{
    int current = 0 ;
    int maxs = INT_MIN;//this is negative infinity
    //cout<<vec.size();
    for(int i = 0; i<vec.size();i++)
    {
        current+=vec[i];
        maxs = max(maxs,current);
        //if current goes to negative then equal to zero
        if(current<0)
        {
            current = 0 ;
        }
    }
    cout<<"The value of curret is: "<<current<<endl;
    return maxs;
}