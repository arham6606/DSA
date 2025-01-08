
//QUESTION: BINARY TO DECIMAL CONVERSION

#include<iostream>
#include<cmath>
using namespace std;

int binary(int num);
int main()
{
    int num;
    cout<<"Enter the binary number you want to convert into decimal: ";
    cin>>num;
    //int n = 110101 % 10; // give us the most right hand value
   // int n = 110101 / 10; // deletes the most right hand value and displays the remaining value
    //cout<<n;
    int result = binary(num);
    cout<<"The Decimal form will be: "<<result;
}
//110100
int binary(int num)
{
    int result = 0;
    int power = 0;
    int rem;
    while(num>0)
    {
       rem = num%10;
       num = num/10;
       result += rem *pow(2,power);
       power = power +1;
    }
    return result;
}