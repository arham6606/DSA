#include <iostream>
using namespace std;
void enter(int array[], int size);
void display(int array[], int size);
void pairs(int array[], int size, int target);
int main()
{
    int target;
    cout << "Enter Your target sum: ";
    cin >> target;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Entering data in the array.." << endl;
    enter(array, n);
    cout << "Displaying data from array..." << endl;
    display(array, n);
    cout << "Displaying pairs which match the target.." << endl;
    pairs(array, n, target);
}

void enter(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void display(int array[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {

        cout << array[i];
        if (i != size - 1)
        {
            cout << ",";
        }
    }
    cout << "}" << endl;
}

void pairs(int array[], int size, int target)
{
    int size1=size;
    int count = 1;
    int count1 = 1;
    int result;
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                result = array[i] + array[j];
                if (result == target)
                {
                    
                    if (count <= (size / 2))
                    {
                        cout << "(" << array[i] << "," << array[j] << ")";

                        if (i < (size/2)-1 )
                        {
                            cout << ",";
                        }
                    }
                    
                    count++;
                    

                   
                    
                }
            }
            // cout << endl;
            // cout << i << "and" << j << endl;
        }
    }
    cout << "]";
}




/*

#include <iostream>
#include <unordered_set>
using namespace std;

void enter(int array[], int size);
void display(int array[], int size);
void pairs(int array[], int size, int target);

int main()
{
    int target;
    cout << "Enter Your target sum: ";
    cin >> target;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int array[n];
    cout << "Entering data in the array..." << endl;
    enter(array, n);
    cout << "Displaying data from array..." << endl;
    display(array, n);
    cout << "Displaying pairs which match the target..." << endl;
    pairs(array, n, target);
}

void enter(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void display(int array[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1)
        {
            cout << ",";
        }
    }
    cout << "}" << endl;
}

void pairs(int array[], int size, int target)
{
    unordered_set<int> seen; // To track elements we’ve encountered
    bool found = false;      // To track if we find any pairs

    cout << "[";
    for (int i = 0; i < size; i++)
    {
        int complement = target - array[i];
        if (seen.find(complement) != seen.end())
        {
            if (found) cout << ","; // Add a comma before the next pair
            cout << "(" << complement << "," << array[i] << ")";
            found = true;
        }
        seen.insert(array[i]);
    }
    cout << "]" << endl;

    if (!found)
    {
        cout << "No pairs found!" << endl;
    }
}

*/