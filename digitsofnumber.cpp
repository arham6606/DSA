#include<iostream>
using namespace std;
int digits(int n);


int main()
{ 
    int a=14/10;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
   // cout<<a;
    cout<<digits(n);

}

int digits(int n)
{
   
    int result=0;
   
    while(n>0)
    {
        result = result+ n%10;
        n = n/10;
        
    }
    
    
    
return result;
}
