
//QUESTION: MISSING NUMBER IN THE ARRAYS

#include <iostream>
using namespace std;
#include<algorithm>

int main()
{
    int size;
    cout << "Enter Your Siza: ";
    cin >> size;
    int array[size];
    cout<<"Enter the elements in the array"<<endl;
    for(int i = 0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<endl;
    int sumarray = 0;
    for (int i = 0; i < size; i++)
    {
        sumarray += array[i];
    }
int last;
    cout << "The sum of the current array is: " << sumarray << endl;
    sort(array,array+size);
    for(int i = 0 ;i<size;i++)
    {
        if(i==size-1)
        {
            last = array[i];
        }
    }
    cout << "The last numebr in the array is: " << last << endl;
    int sum = (last * (last + 1)) / 2;
    cout << "The sum of natural Number up to last number in the array: " << sum << endl;
    int missing;
    missing = sum - sumarray;
    cout << "The missing number is: " << missing << endl;
}