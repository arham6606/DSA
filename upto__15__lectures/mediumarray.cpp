
// QUESTION: MEDIUM OF 2 SORTED ARRAYS

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    // storing the result
    float result;
    // creating the vectors
    vector<float> vec1 = {};
    vector<float> vec2 = {};
    vector<float> vec3;
    // merging the vectors
    vec3.insert(vec3.end(), vec2.begin(), vec2.end());
    vec3.insert(vec3.end(), vec1.begin(), vec1.end());
    if(vec3.empty())
    {
        cout<<"The medium will be: 0";
        return 0 ;
    }
    // storing the size of the vector 3
    int size = vec3.size();
    // cout << vec3.size() << endl;

    // this will be used for tracking the comma (,)
    int i = 0;
    // sorting the vector
    sort(vec3.begin(), vec3.end());
   

    // displaying the vector in a good format
    cout << "[";
    // for each loop
    for (int value : vec3)
    {
        cout << value;
        if (i < size - 1)
        {
            cout << ",";
        }
        i++;
    }
    cout << "]";
    // ending the displaying

    // using 2 pointer algoritm
    int start = 0;
    int end = size - 1;
    // if array is odd then it will run
    if (vec3.size() % 2 != 0)
    {
        while (true)
        {
            if (start == end)
            {
                result = vec3[start];
                cout << "The medium of this array is: " << result;
                break;
            }
            start++;
            end--;
        }
    }
    // now if the vector is even then there is a different scenerio
    else
    {
        int start = 0;
        int end = size - 1;
        while (true)
        {
            if (start > end)
            {
                result = (vec3[start] + vec3[end]) / 2;
                cout << "The medium will be: " << result;
                break;
            }
            start++;
            end--;
        }
    }
}