#include <iostream>

using namespace std;

// function prototypes
int getAges(int age[], int size);
int getChoice();
void displayOrder();
void displayReverse();

// main function, uses user inputted ages and gives out either the array in order or reverse order

int main()
{
    char userChoice;
    char replay;

    int age[5] = {};
    const int size = 5;
    // do while loop for user to keep running the program
    do
    {
        // function calls
        getAges(age, size);
        userChoice = getChoice();
        // selection statement based on userchoice of O or R
        if (userChoice == 'O' || userChoice == 'o')
        {
            for (int i = 0; i < size; i++)
                cout << age[i] << endl;
            cout << "Run program again? Y/N" << endl;
            cin >> replay;
        }
        else if (userChoice == 'R' || userChoice == 'r')
        {
            for (int i = size; i >= 0; i--)
                cout << age[i] << endl;
            cout << "Run program again? Y/N" << endl;
            cin >> replay;
        }
        else
        {
            cout << "Wrong input, restart program! " << endl;
            replay = 'y';
        }
    } while (replay == 'y' || replay == 'Y');
}

// getAges function, wants the user to enter the ages, returns it to the main function
int getAges(int age[], int size)
{

    cout << "Enter ages" << endl;
    for (int i = 0; i < 5; i++)
        cin >> age[i];
    return 0;
}
// GET CHOICE FUNCTION --> prompts the user to select if they want the array to be in order or reverse
int getChoice()
{

    char order;
    cout << "Would you like the array in order or reverse (O or R)? " << endl;
    cin >> order;

    return order;
}