
//QUESTION : SHIFTING THE ZEROS TO THE RIGHT AND LEFT

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int j = 0; 
    int array[7] = {0,1,3,0,12,5,0};
    for(int i = 0; i<7;i++)
    {
        if(array[i]!=0)
        {
           array[j] = array[i];
           j++; 
        }
    }
 
 for(j;j<7;j++)
 {
    array[j]=0;
 }
    
    cout<<"[";
    for(int i = 0;i<7;i++)
    {
        cout<<array[i];
        if(i<7-1)
        {
            cout<<",";
        }
    }
       cout<<"]";
//above code will shift the zeros to the right
    // below code will shift the zeros to the left
    sort(array,array+7);
    cout<<endl;
     cout<<"[";
    for(int i = 0;i<7;i++)
    {
        cout<<array[i];
        if(i<7-1)
        {
            cout<<",";
        }
    }
       cout<<"]";
    
}


