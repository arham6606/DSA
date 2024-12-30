#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Customer {
    int id;
    string name;
    string address;
    string fatherName;
    string cnic;
    bool isCheckedIn;
    bool isDeleted;
    string transportBooked;
    string laundryStatus;
    string cleaningStatus;
    string feedback;
};

// Function declarations
void addCustomer(Customer *customers, int &size);
void updateCustomer(Customer *customers, int size);
void deleteCustomer(Customer *customers, int &size);
void checkIn(Customer *customers, int size);
void checkOut(Customer *customers, int size);
void bookTransport(Customer *customers, int size);
void requestLaundry(Customer *customers, int size);
void requestCleaning(Customer *customers, int size);
void giveFeedback(Customer *customers, int size);
void displayCustomers(const Customer *customers, int size);
void writeToFile(Customer *customers, int size,const string &fileName);
void readFromFile(Customer *customers, int size,const string&fileName);