
//QUESTION: SMALLEST AND LARGEST VALUE IN THE ARRAY

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
   int num[n];
   for(int i = 0;i<n;i++)
   {
    cout<<"Student "<<i+1<<endl;
     cin>>num[i];
   }
   int count1= 0,count2 = 0 ;
 int largest = num[0];
    int smallest = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] > largest) {
            largest = num[i];
            count1 = i;

        }
        if (num[i] < smallest) {
            smallest = num[i];
            count2 = i;
        }
    }

    cout << "Largest value: " << largest << endl;
    cout<<"The largest value index is:"<<count1<<endl;
    cout << "Smallest value: " << smallest << endl;
       cout<<"The smallest value index is:"<<count2<<endl;
}


//................................................................

