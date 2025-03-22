
#include <iostream>
#include <conio.h>

using namespace std;

struct Entries
{
	string type;
	string input;
};


int main()
{
    string input;
    cout << input << "\n";

    //int userChoice = 0;


    const int Num_Entries = 6;
    Entries entries[] =
    {
        {"place", ""},
        {"adjective", ""},
        {"noun", ""},
        {"famous person", ""},
        {"verb", ""},
        {"animal", ""},
    };

    for (int i = 0; i < Num_Entries; i++)
    {
        cout << (i + 1) << ". Enter a: " << entries[i].type << ":";
        cin >> entries[i].input;
    }

    char fixMistakes;
    cout << "Do you want to fix any mistakes? (y/n): ";
    cin >> fixMistakes;

    while (fixMistakes == 'y' || fixMistakes == 'Y')
    {
        int userChoice;
        cout << "Which entry would you like to fix? (1-" << Num_Entries << "): ";
        cin >> userChoice;

        if (userChoice >= 1 && userChoice <= Num_Entries)
        {
            cout << "Enter a " << entries[userChoice - 1].type << ": ";
            cin >> entries[userChoice - 1].input;
        }

        cout << "\nDo you want to fix any more mistakes? (y/n): ";
        cin >> fixMistakes;
    }


    cout << "Your Mad Lib: ";

    cout << "Yesterday, I went to " << entries[0].input << " and saw a " << entries[1].input << " " << entries[2].input << ". ";
    cout << "I asked " << entries[3].input << " if he wanted to " << entries[4].input << ", but he said he was busy walking his pet " << entries[5].input << ".\n";


    (void)_getch();
    return 0;
}