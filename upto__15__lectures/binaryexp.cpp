
//QUESTOION: BINARY EXPONENTION OF POWER

#include <iostream>
using namespace std;
// function declaration
double powers(int binary, int num);
int decimaltobinary(int num);
int main()
{
    // entering the input
    int number;
    cout << "Enter the base: ";
    cin >> number;
    int expo;
    cout << "Enter the exponent: ";
    cin >> expo;
    // calling the function
    int binary = decimaltobinary(expo);
    int ans = powers(binary, number);
    cout << "The answer will be: " << ans << endl;
}

// conversion
int decimaltobinary(int num)
{
    int result = 0;
    int rem;
    int power = 1;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        result = rem * power + result;
        power *= 10;
    }
    return result;
}

// calculating the power
double powers(int binary, int num)
{
    int ans = 1;
    while (binary > 0)
    {
        if (binary % 10 == 1)
        {
            ans *= num;
        }
        num *= num;
        binary /= 10;
    }
    return ans;
}