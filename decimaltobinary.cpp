
//DECIMAL TO BINARY CONVERTER
#include<iostream>
using namespace std;
int decimaltobinary(int num);
int main()
{
    int num;
    cout<<"Enter the number you want to convert to binary: ";
    cin>>num;
    int result = decimaltobinary(num);
    cout<<"The binary form is as follows: "<<result;
}

int decimaltobinary(int num)
{
    int result = 0;
    int rem;
    int power = 1;
    while(num>0)
    {
      rem = num%2;
      num = num/2;
      result = rem * power + result;
      power *=10;
    }
    return result;
}