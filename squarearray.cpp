#include <iostream>
using namespace std;
#include<cmath>
// function decalarations
void enter(int array[], int size);
void display(int array[], int size);
void powers(int array[], int size, int power);
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    enter(array, size);
    cout << "\nDisplaying the data from array.." << endl;
    display(array, size);
    int power;
    cout << "\nEnter the power you want to calculate: ";
    cin >> power;
    cout << "squareing the array and displaying it..." << endl;
    powers(array, size, power);
    display(array, size);
}

// function writng...........................................

void enter(int array[], int size)
{
    cout << "Entering data in the array...." << endl;
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
        if (i < size - 1)
        {
            cout << ",";
        }
    }
    cout << "}";
}

void powers(int array[], int size, int power)
{
    int count=1;
    for (int i = 0; i < size; i++)
    {
        array[i] = pow(array[i],power);
    }
}