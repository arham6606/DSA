#include"point.h"

int main()
{
     int set;
     cout<<"How many coordinates do you want to enter: ";
     cin>>set;
     Point* point=new Point[set];
     initailzie(point,set);
     display(point,set);
     Point result = max(point,set);
     cout<<"Max Points:";
    cout<<"("<<result.x<<","<<result.y<<")"<<endl;
    int c = negative(point,set);
    cout<<"Number of points with both x and y negative: "<<c<<endl;
    cout<<"Points Written to file successfuly.\n";
    string filename="points.txt";
    write(point,set,filename);
    cout<<"Points read from file.\n+";
     read( filename);
    deallocate(point);
    cout<<"Memory Deallocated successfully..";
}