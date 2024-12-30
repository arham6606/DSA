#include"function.h" 
string roll;
string idb;
fstream file, temp, another, storing, file2,rate; 
string filename = "first_ID_Book.txt"; 
int totalDonations=0;
void Adm(Admin *admin)
{
   // this function is to store the ID in the array so that the same ID is not
   // issued to the books
   const int MAX = 10000;
   string ID_Storing[MAX];
   int *count = new int;
   *count = 0;
   ID_Track(ID_Storing, *count);
   // initaliazing a to 0
   int a = 0;
   // some declarations are passsed here...
   // string book;
   // string id;
   // string password;
   // this is the password set by the university for the liabray
   const string pass = "123";
   // enter the admin password to log in
   cout << "Enter the Admin Password:";
   getline(cin, admin->password);
   cout << "\n";
   // if it matches then process goes forward
   if (pass == admin->password)
   {
      quotes();
      cout << "\n\nLogin Successfull....\n\n";
      // opening the file in output and apppend mode
      file.open(filename, ios::out | ios::app);
      file2.open("second_ID_Book.txt", ios::out | ios::app);
      // number of books to enter..
      int number;
      cout << "How many Books Do You Want To Enter:";
      // this loop is used for error handling..
      while (!(cin >> number))
      {
         // this is used to clear the flags
         // if we not use cin.clear() we can not do further processing
         cin.clear();
         // this line is used to ignore the characters
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Please Enter An Integer:";
      }
      cout << "you have Entered:" << number << endl;
      // for entering the books....
      while (a < number)
      {
         // to run if the file is opened
         cin.ignore();
         if (file.is_open())
         {

            // inputting the bookn name and id...
            cout << "Enter The Book Name:";
            getline(cin, admin->book);
            cout << "Enter Book Id:";
            getline(cin, admin->id);
            cout << "Press Enter to Continue.";
            // cin.ignore();
            bool tru = true;
            for (string num : ID_Storing)
            {
               // this loop is also for each loop used in DSA
               // above is an iterator which will check if the array has the same IDs then
               // it will not store it
               if (num == admin->id)
               {
                  // the loop will break if the admin enters 2 books with same IDs
                  // as IDs are unique
                  tru = false;
                  break;
               }
            }
            if (tru)
            {
               file << admin->book << "*";
               file2 << admin->book << "*";
               file << admin->id << "\n";
               file2 << admin->id << "\n";
            }

            // for incrementing one in a;;;
            a++;
         }
         // if it matches then
         if (a == number)
         {
            // giving user the choicee to add more books or can exit
            int choice;
            cout << "\n\nPress '1' To Continue Adding Books\nPress '2' To Exit..\n";
            cout << "Enter Your Choice:";
            cin >> choice;
            // if it matches then loop breaks..
            if (choice == 2)
            {
               break;
            }
            else
            {
               // if not ask the user again to enter how many books...
               a = 0;
               cin.ignore();
               cout << "\nEnter The Number of Books You Want To Enter:";
               cin >> number;
               // number;
               cin.ignore();
            }
         }
      }
   }
   // if passsword not matches then log in is failed
   else
   {
      cout << "Login is Failed.....";
   }
   // closing the file is very important if not as it generates error
   file.close();
   file2.close();
   // this below code is same which i told you at the starting of admin functions
   // ID_Track(ID_Storing);
   // cout<<"Count is:"<<count;
   // freeing the memory..
   delete count;
   count = nullptr;
}
void show(Show*showing)
{  
   // opening the file
   file.open(filename, ios::in);
   // if file is opened. then
   if (file.is_open())
   {
      // displaying input ont the screen
      cout << setw(59) << "Book" << setw(42) << "Id" << "\n";
      cout << "_______________________________________________________________________________________________________\n";
      // reading one line at a time form the file..
      while (getline(file,showing->r_book, '*') && getline(file, showing->r_id, '\n'))
      {
         // displaying the input on the screen
         cout << setw(60) <<showing->r_book << setw(40) <<showing->r_id << endl;
         cout << "______________________________________________________________________________________________________\n";
      }
   }
   else
   {
      // if file is not opened
      cout << "File Not Opened...";
   }
   // closing the file..
   file.close();
}
void who(string roll, string idb)
{
   // opening the files
   another.open("student.txt", ios::in);
   file2.open("second_ID_Book.txt", ios::in);
   // declaring the variables
   string check_roll, check_roll1;
   string check_idb, check_idb1;
   // opening the file
   storing.open("store.txt", ios::app);
   if (storing.is_open())
   {
      // reading the files
      while (getline(another, check_roll, '.') && getline(another, check_roll1, '\n'))
      {
         if (check_roll == roll)
         {
            // writing this into storing file
            storing << check_roll << "*";
         }
      }
      while (getline(file2, check_idb, '*') && getline(file2, check_idb1, '\n'))
      {
         // same with this
         if (check_idb1 == idb)
         {
            storing << check_idb1 << "\n";
         }
      }
   }
   else
   {
      cout << "Error while opening file\n";
   }
   // closing the files...
   storing.close();
   another.close();
   file2.close();
}
#include <iostream>
using namespace std;

void libraryRules() {
    cout << "\n\t\t\t===========================\n";
    cout << "\t\t\t       LIBRARY RULES       \n";
    cout << "\t\t\t===========================\n\n";
    cout << "1. Maintain silence in the library at all times.\n";
    cout << "2. Mobile phones must be kept on silent mode.\n";
    cout << "3. Books must be returned within the due date to avoid fines.\n";
    cout << "4. Food and beverages are not allowed inside the library.\n";
    cout << "5. Handle books and materials with care; any damage will incur penalties.\n";
    cout << "6. Ensure to log your entry and exit in the library register.\n";
    cout << "7. Students can borrow up to 3 books at a time.\n";
    cout << "8. Reference books and journals cannot be taken out of the library.\n";
    cout << "9. Keep the library premises clean and tidy.\n";
    cout << "10. Misbehavior in the library will lead to suspension of library privileges.\n\n";
    cout << "\t\t\tThank you for adhering to the rules!\n";
    cout << "\t\t\t===========================\n";
}
void printPattern() {
    const string text1 = "LIBRARY MANAGEMENT SYSTEM";
    const int width = 40; // Width of the star pattern box

    // Top border
    for (int i = 0; i < width; i++) {
        cout << "*";
    }
    cout << endl;

    // Empty rows before text
    for (int i = 0; i < 2; i++) {
        cout << "*";
        for (int j = 0; j < width - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Center the text
    cout << "*";
    int padding = (width - text1.length() - 2) / 2;
    for (int i = 0; i < padding; i++) {
        cout << " ";
    }
    cout << text1;
    for (int i = 0; i < padding; i++) {
        cout << " ";
    }
    // If there's a leftover space, add it on the right side
    if ((width - text1.length() - 2) % 2 != 0) {
        cout << " ";
    }
    cout << "*" << endl;

    // Empty rows after text
    for (int i = 0; i < 2; i++) {
        cout << "*";
        for (int j = 0; j < width - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Bottom border
    for (int i = 0; i < width; i++) {
        cout << "*";
    }
    cout << endl;
}
void donateCash(ofstream &file, int &totalDonations) {
    int amount;
    char choice;

    cout << "Enter the donation amount: ";
    cin >> amount;

    // Add the donation to the total and write to the file
    totalDonations += amount;
    file << amount << endl;

    cout << "Do you want to make another donation? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        donateCash(file, totalDonations); // Recursive call for next donation
    }
}
int calculateTotalFromFile(const string &filename) {
    ifstream file(filename);
    int amount, total = 0;

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return -1;
    }

    // Read all amounts and calculate the sum
    while (file >> amount) {
        total += amount;
    }

    file.close();
    return total;
}