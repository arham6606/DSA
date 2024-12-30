#include"function.h"
void chat()
{
   cout << setw(40) << "Welcome to The ChatBot" << setw(30) << "Press 'thank you' to exit\n";
   string user;         // To store user input
   string chatResponse; // To store chatbot response

   while (true)
   {
      // Get user input
      cout << "You: ";
      getline(cin, user);

      // Convert the input to lowercase to avoid case sensitivity
      transform(user.begin(), user.end(), user.begin(), ::tolower);

      // Use if-else to check for specific keywords and provide responses
      if (user == "hi" || user == "hello")
      {
         chatResponse = "How can I help you today?";
      }
      else if (user == "engineering")
      {
         chatResponse = "Search Books ID with 1 To 20";
      }
      else if (user == "business")
      {
         chatResponse = "Search Books ID with 21 To 40";
      }
      else if (user == "improvement" || user == "motivational")
      {
         chatResponse = "Search Books ID with 41 To 60";
      }
      else if (user == "library hours")
      {
         chatResponse = "Library is open from 8 AM to 8 PM";
      }
      else if (user == "lost")
      {
         chatResponse = "If you have lost a book, contact the Librarian.";
      }
      else if (user == "punishment")
      {
         chatResponse = "Your Student ID card is to be detained.";
      }
      else if (user == "fine")
      {
         chatResponse = "If you have lost the book, the fine will be according to the book's value.";
      }
      else if (user == "books")
      {
         chatResponse = "Yes, we have a variety of books including Business, Engineering, and Motivational.";
      }
      else if (user == "librarian")
      {
         chatResponse = "The librarian in charge is AK-47.";
      }
      else if (user == "thank you")
      {
         // End the conversation if the user says "thank you"
         cout << "ChatBot: I am happy to help you. Please come again!" << endl;
         break;
      }
      else
      {
         // Default response for unrecognized input
         chatResponse = "I am sorry, can you rephrase it?";
      }

      // Display chatbot's response
      cout << "ChatBot: " << chatResponse << endl;
   }
}

void extract()
{ // this the functions call here written below
   if (student())
   {
      // we have opened both the files here/..
      file.open(filename, ios::in);
      temp.open("temp.txt", ios::out);
      // delarationg of string varaibles/..
      string line1, line2;
      // string idb;
      //  user input of id of the book
      cout << "Enter ID of The Book:";
      cin >> idb;
      // checking if both the files are opened
      if (!file.is_open() || !temp.is_open())
      {
         cout << "Error Opening the Files." << endl;
      }
      // seeting bool to false
      bool found = false;
      // this loop checks the id is equal to line 2 which is the id,
      while (getline(file, line1, '*') && getline(file, line2, '\n'))
      {
         // if it equals then show book is extracted..
         if (line2 == idb)
         {
            cout << "The Book is Extracted.";
            cout << "Wait 3 Seconds...";
            found = true;
            break;
         }
      }

      if (found)
      {
         // these 2 line are used to reset the file from start to end.
         file.clear();
         file.seekg(0);
         string line;
         // this loop used to fill up the second file,.
         while (getline(file, line1, '*') && getline(file, line2, '\n'))
         {
            // 2!=4 then it runs
            if (line2 != idb)
            {
               temp << line1 << "*" << line2 << "\n";
            }
         }
      }
      // if not book id is not found
      else
      {
         cout << "Book ID not found" << endl;
      }
      // closing the files
      file.close();
      temp.close();
      //"temp" and "file" only one will remain and one will be deleted
      remove(filename.c_str());
      rename("temp.txt", filename.c_str());
   }
   // if it is false
   else
   {
      cout << "Roll No Was Not Found.";
   }
}


void rating()
{

   rate.open("Book_Rating.txt", ios::out | ios::app);
   file2.open("second_ID_Book.txt", ios::in);
   string rate1;
   string rate2;
   string id;
   int rating;
   cout << "Enter the book ID you want to rate:";
   cin >> id;
   bool wrong = true;
   // rate<<"id";
   // rate<<setw(30)<<"Rating"<<endl;
   while (getline(file2, rate1, '*') && getline(file2, rate2, '\n'))
   {
      if (id == rate2)
      {

         cout << "Rate the book(1-10):";
         cin >> rating;
         if (rating >= 1 && rating <= 10)
         {
            rate << id << setw(27);
            rate << "." << rating << "\n";
         }
         else
         {
            cout << "Invalid.Enter rating from 1 to 10" << endl;
         }
         wrong = false;
      }
    
   }
   if(wrong)
   {
      cout<<"Book ID not found"<<endl;
   }

   file2.close();
   rate.close();
}

void average()
{
   float average;
   float sum = 0.0;
   string id;
   string rat;
   int rats;
   float count = 0.0;
   rate.open("Book_Rating.txt", ios::in);

   while (getline(rate, id, '.') && getline(rate, rat, '\n'))
   {
      stringstream ss(rat);
      ss >> rats;
      sum += rats;
      count++;
   }
   average = sum / count;
   cout << fixed << setprecision(2) << "The average rating of the books are: " << average << endl;
   rate.close();
}