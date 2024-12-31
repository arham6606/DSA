#include"point.h"
fstream file;
void initailzie(Point* points,int arraysize)
{
    for(int i =0;i<arraysize;i++)
    {
        cout<<"Enter Coordinate for Point "<<i+1<<"(x,y):"<<endl;
        cin>>points[i].x>>points[i].y;
    }
}

void display(Point*points,int arraysize)
{
    cout<<"Points in the array:"<<endl;
    for (int i = 0;i<arraysize;i++)
    {
        cout<<"("<<points[i].x<<","<<points[i].y<<")"<<endl;
    }
}


Point max(Point*points,int arraysize)
{
    Point Max = points[0];
    for (int i =1;i<arraysize;i++)
    {
        if (points[i].x > Max.x && points[i].y>Max.y)
        {
            Max = points[i];
        }
    }
    return Max;
}

int negative(Point*points,int arraysize)
{
    int count = 0;
    for (int i = 0;i<arraysize;i++)
    {
        if (points[i].x<0 && points[i].y<0)
        {
          count ++;
        }
    }
    return count;
}

void write(Point*points,int arraysize,string filename)
{
    file.open(filename,ios::out);
    file<<"Points in the array."<<endl;
     for (int i =0;i<arraysize;i++)
     {
         file<<"("<<points[i].x<<","<<points[i].y<<")"<<endl;
     }
     file.close();
}

void read(string filename)
{
    string line;
    file.open(filename,ios::in);
    while(getline(file,line,'\n'))
    {
        cout<<line<<endl;
    }
    file.close();
}

void deallocate(Point* points)
{
    delete[]points;
}