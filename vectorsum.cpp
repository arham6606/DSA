#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaring a vector
    vector<int> number;
    // now give size;
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    // below code is for entering data in the vector
    int i = 0;
    cout << "Enter the elements..." << endl;
    while (i < size)
    {
        //this loop will enter data in the vector
        int num;
        cin >> num;
        number.push_back(num);
        i++;
    }
    //this for loop will display data from vector in a nice format
    int j = 0;
    cout << "{";
    for (int n : number)
    {
        cout << n;
        if (j < size-1)
        {
            cout << ",";
        }
        j++;
    }
    cout << "}\n";
    //below loop will be used to calculate sum of the numbers..
int sum = 0;
    for(int n:number)
    {
     sum+=n;
    }
    cout<<"The sum of the number in the vector is: "<<sum<<endl;
}