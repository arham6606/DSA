
// QUESTION : nCr CALCULATOR...
#include<iostream>
using namespace std;

int binomial(int n , int r);


int main()
{
    int n,r;
    cout<<"Enter Your n: ";
    cin>>n;
    cout<<"Enter Your r: ";
    cin>>r;
    int result= binomial(n,r);
    cout<<"The Binomial coefficient will be: "<<result;
} 

int binomial(int n , int r)
{
    int product = 1;
    for(int i = 1;i<=n;i++)
    {
        product = i *product;
    }
    int product_1 = 1;
    for(int i=1;i<=r;i++)
    {
        product_1 = i*product_1;
    }
    int result = n-r;
    int product_2 = 1;
    for(int i = 1;i<=result;i++)
    { 
        product_2 = i*product_2;
    }
      int answer = (product)/product_1 * product_2;    
    return answer ;
}