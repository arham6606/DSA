// this is the header file
#include "function.h"
int main()
{
    printPattern();
    cout << "\033[1;34mAUTHORS: M SHAHMEER FAISAL ROLL NO 32\033[0m" << endl;
    cout << "\033[1;34mAUTHORS: M ARHAM ROLL NO 54\033[0m" << endl;
    cout << "\033[1;34mAUTHORS: M UMAIS EHSAN ROLL NO 34\033[0m" << endl;
    while (true)
    {
        // giving the user some choices....
        cout << "\n...............................................................................";
        cout << "\n'1' For Admin\n'2' For Show All Books\n'3' For Extract Books\n'4' For Help  \n'5' For Exit\n";
        cout << "'6' For library rules " << endl;
        cout << "'7' For Cash donation " << endl;
        cout << "'8' For Book rating" << endl;
        cout << "'9' For Average Rating" << endl;
        int *choice = new int;
        // memory allocation
        if (choice == nullptr)
        {
            cout << "Memory allocation failed";
        }
        // enter the choice of your choosing
        cout << "\nEnter Your Choice:";
        cin >> *choice;
        cout << "\n";

        // for admin block of code
        if (*choice == 1)
        {
            Admin *admin = new Admin;
            // to delete spaces...
            cin.ignore();
            // fucntion calling
            Adm(admin);
            // this code used to clear console screen
            // for better understanding
            this_thread::sleep_for(chrono::seconds(0));
#if defined(_Win32)
            system("CLS");
#else
            system("clear");
#endif
            // freeing the memory
            delete admin;
            admin = nullptr;
        }
        // for showing the books to students
        else if (*choice == 2)
        {
            Show *showing = new Show;
            // calling function
            cin.ignore();
            show(showing);
            // freeing the memory
            delete showing;
            showing = nullptr;
        }
        // for extracting the books..
        else if (*choice == 3)
        {
            cin.ignore();
            // calling funtion
            extract();
            cout << "\n";
            // calling function
            who(roll, idb);
            // for clearing the screen
            this_thread::sleep_for(chrono::seconds(3));
#if defined(Win32)
            system("CLS");
#else
            system("clear");
#endif
        }
        // for chat bot..........
        else if (*choice == 4)
        {
            cin.ignore();
            chat();
            this_thread::sleep_for(chrono::seconds(2));
#if defined(Win32)
            system("CLS");
#else
            system("Clear");
#endif
        }

        // for exit/....
        else if (*choice == 5)
        {
            // decalaring variables and initializing them
            // it is the password...
            string end = "bye world";
            string end_pass;
            cin.ignore();
            // taking input from the user
            cout << "Enter The PassWord To Close The System:";
            getline(cin, end_pass);
            // if it matches them program will end
            // this will clear the console screeen because we dont want the pass word to be know by anyone
            this_thread::sleep_for(chrono::seconds(0));
#if defined(Win32)
            system("CLS");
#else
            system("Clear");
#endif
            if (end == end_pass)
            {
                cout << "System is Shutting Dowm.\nSee You again\n";
                quotes();
                break;
            }
            // for invalid  input......
            else
            {
                cout << "Wrong PassWord\n";
            }
        }
        else if (*choice == 6)
        {
            libraryRules();
        }
        else if (*choice == 7)
        {
            string filename = "cash_donation.txt";
            ofstream file(filename, ios::app); // Open the file in append mode

            if (!file.is_open())
            {
                cout << "Error opening file!" << endl;
                return 1;
            }

            int totalDonations = 0;

            cout << "Welcome to the Cash Donation System!" << endl;
            donateCash(file, totalDonations); // Start donation process

            file.close();

            // Read and calculate total from the file
            int totalFromFile = calculateTotalFromFile(filename);

            cout << "\nThank you for your donations!" << endl;
            cout << "Total donations during this session: " << totalDonations << endl;

            if (totalFromFile != -1)
            {
                cout << "Total donations recorded in file: " << totalFromFile << endl;
            }
        }

        else if (*choice == 8)
        {
            rating();
        }
        else if (*choice == 9)
        {
             string password ="123";
           string pass;
           cin.ignore();
           cout<<"Enter the password: "<<endl;
           getline(cin,pass);
           if(password == pass)
           {
            average();
           }
           else
           {
            cout<<"Enter pass word again.."<<endl;
           }
        }
        delete choice;
        choice = nullptr;
    }
}