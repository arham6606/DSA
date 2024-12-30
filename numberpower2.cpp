/*  this is done by simple method...


#include<iostream>
using namespace std;

int main()
{
    int product =2;
    int n ;
    bool result;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 2;i<=n;i*=2)
    {
        if (n==i)
        {
            result = true;
            break;
        }
        result = false;

    }
    if(result)
    {
        cout<<"This is the power of 2.";
    }
    else
    {
         cout<<"This is not the power of 2.";
    }
}
*/

//..........................................
//this is done by using bitwise operator

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}
