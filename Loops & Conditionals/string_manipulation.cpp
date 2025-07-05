/*
Name: Kathy Do
Professor: Taha Malik
Course: CSCI 135
Assignment: Project 2

string manipulation
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string firstName, lastName;
    cout << "Enter your full name (first and last): ";
    getline(cin, name);

    int i = 0;
    while(i < name.length() && name[i] != ' ')
    {
        i++; // i is index of space
    }

    firstName = name.substr(0, i);
    lastName = name.substr(i + 1);

    // capitalizing first name
    for (int i = 0; i < firstName.length(); i++) // for every element in first name,
    {
        if(firstName[i] >= 'a' && firstName[i] <= 'z') // capitalize
        {
            firstName[i] = firstName[i] - 32;
        }
    }

    // capitalizing last name
    for (int i = 1; i < lastName.length(); i++) // for every element in last name,
    {
        if(lastName[i] >= 'a' && lastName[i] <= 'z') // capitalize
        {
            lastName[i] = lastName[i] - 32;
        }
    }

    string upperFull = firstName + " " + lastName; // concatenate all together

    cout << upperFull << endl; // output ir
    
}