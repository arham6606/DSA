
//QUESTION : HOW MANY TIMES A NUMBER HAS BEEN REPEATED IN THE ARRAY
#include<iostream>
using namespace std;

int main()
{
    int array[6] = {1,2,2,3,3,3};
    bool result[6]={false};
    
    for(int i = 0 ; i<6;i++)
    {
        if(result[i])
        {
            continue; 
        }
         int count = 1;
        for(int j = i+1; j<6;j++)
        {
            if(array[i]==array[j])
            {
               result[j] = true;
               count++;
            }
            
        }
        
      cout<<"The frequency of "<<array[i]<<" is "<<count<<endl;
    }
    
}

