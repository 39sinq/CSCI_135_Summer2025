/*
Name: Kathy Do
Professor: Taha Malik
Course: CSCI 135
Assignment: Project 2

number guessing game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int num;
    int guess = 0;
    num = rand() % 10 + 1; // number between 1 and 10


    while(guess != num)
    {
        cout << "Enter a number: ";
        cin >> guess;

        if(guess < num)
        {
            cout << "Too low!" << endl;
        }else if (guess > num)
        {
            cout << "Too high!" << endl;
        } else
        {
            cout << "Correct! Well done." << endl;
            break;
        } 
    }

    return 0;
}

