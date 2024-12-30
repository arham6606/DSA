#include<iostream>
using namespace std;
#include<vector>
void enter(vector<int>&vec,int size);
void display(vector<int>&vec);
void reverse(vector<int>&vec,int size);

int main()
{
    int n;
    cout<<"How many values you want to add: ";
    cin>>n;
    vector<int>number;
    cout<<"Writing an vector...."<<endl;
    enter(number,n);
    cout<<"Displaying an vector.."<<endl;
    display(number);
    cout<<"Reverse array is..."<<endl;
    reverse(number,n);
    display(number);
}

void enter(vector<int>&vec,int size)
{
    int value;
     for(int i = 0;i<size;i++)
     {
        cin>>value;
        vec.push_back(value);
     }
}

void display(vector<int>&vec)
{
     for(int value:vec)
     {
        cout<<value<<endl;
     }
}

void reverse(vector<int>&vec,int size)
{
    int start=0,end = size-1;
      while(start<=end)
      {
        swap(vec[start],vec[end]);
        start++;
        end--;
      }
}