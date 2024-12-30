#include"function.h"
void quotes()
{
   // genrationg a random number from 1 to 5.
   int random;
   srand(static_cast<int>(time(0)));
   random = (rand() % 5) + 1;
   // in this if else statements we are just generating some quotes for library
   if (random == 1)
   {
      cout << "\t\t\tThe Most Important Asset of Any Library goes Home at Night.";
   }
   else if (random == 2)
   {
      cout << "\t\t\tLibrarian Because Book Wizard isn't an Official Job Title.";
   }
   else if (random == 3)
   {
      cout << "\t\tLibrarian Don't Know Everything.They just Know how to find out everything.";
   }
   else if (random == 4)
   {
      cout << "\t\t\tLibrarian are the Tour-Guides for all of Knowledge.";
   }
   else if (random == 5)
   {
      cout << "\t\t\tLibraries change lives for the better.";
   }
}
bool student()
{
   // check is for true and false
   bool check;
   // opening the file
   another.open("student.txt", ios::in);
   // declaring variables
   string check_roll, check_roll1;
   cout << "Enter Your University Roll No:";
   getline(cin, roll);
   // this loop will convert lowercase into uppercase
   for (char &c : roll)
   {
      c = toupper(c);
   }
   // displaying with uppercase
   cout << "Your Roll No is:" << roll << endl;
   // if file is open then
   if (another.is_open())
   {
      // reading the file
      while (getline(another, check_roll, '.') && getline(another, check_roll1, '\n'))
      {
         if (check_roll == roll)
         {
            check = true;
            break;
         }
         else
         {
            check = false;
         }
      }
   }
   else
   {
      cout << "Error Opening file.";
   }
   if (check)
   {
      check = true;
   }
   else
   {
      check = false;
   }
   another.close();
   return check;
}
void ID_Track(string ID_Storing[], int &count)
{
   // count = 0 ;
   string com_b, com_i;
   file2.open("second_ID_Book.txt", ios::in);
   while (getline(file2, com_b, '*') && getline(file2, com_i, '\n'))
   {
      ID_Storing[count++] = com_i;
   }
   file2.close();
}