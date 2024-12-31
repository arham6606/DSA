#include<iostream>
using namespace std;
#include<string>
#include<fstream>
struct Point
{
    int x;
    int y;
};

void initailzie(Point* points,int arraysize);
void display(Point*points,int arraysize);
Point max(Point*points,int arraysize);
int negative(Point*points,int arraysize);
void write(Point*points,int arraysize,string filename);
void read(string filename);
void deallocate(Point* points);
