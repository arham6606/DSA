#include<iostream>
using namespace std;

int main()
{
    int num;
   // cout<<145%100; //gets the most right digit
    //cout<<145/10; deletes the most right digit
    cout<<"Enter a number: ";
    cin>>num;
    int rem;
    int result = 0;
    // 123
    //3
    while(num>0)
    {
      rem = num%10;
      result =result *10 + rem;
      num = num/10;
    }
    cout<<"The reversed number will be: "<<result<<endl;

}