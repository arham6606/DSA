#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>
#include<cstdlib>
#include <ctime>
#include<cctype>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
extern string roll, idb;
extern string filename; 
extern fstream file, temp, another, storing, file2,rate; 
extern int totalDonations;
struct Admin
{
    string book;
    string id;
    string password;
};

struct Show
{
string r_book;
string r_id;
};

struct Student
{
   string check1;
   string check2;
};

void Adm(Admin *admin);
void show(Show*showing);
void extract();
void quotes();
bool student();
void who(string roll, string idb);
void chat();
void ID_Track(string ID_Storing[], int &count);
void libraryRules();
void printPattern();
void donateCash(ofstream &file, int &totalDonations);
int calculateTotalFromFile(const string &filename);
void rating();
void average();
#endif
