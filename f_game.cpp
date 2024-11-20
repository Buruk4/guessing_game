#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_game()
{
    int random = rand() % 101;
    cout << "Guess the number from 1-100" << endl;
    while (true)
    {
        int guess;
        cin >> guess;
        if (guess == random)
        {
            cout << "you win" << endl;
            break;
        }

        else if (guess > random)
        {
            cout << "your guess id to high" << endl;
        }
        else
        {
            cout << "your guess is low" << endl;
        }
    }
}
int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit \n1. Play Game " << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "thanks for playing" << endl;
            return 0;
            break;

        case 1:
            play_game();

            break;
        }
    } while (choice != 0);
}