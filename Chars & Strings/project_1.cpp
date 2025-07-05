// Name : Kathy Do
// Class : CSCI 135

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // STEP 1
    string fullName = "Kathy Do";
    string firstName;
    string lastName;

    // STEP 2
    // extracting first name
    for(int i = 0; i < 5; i++)
    {
        firstName += fullName[i];
    }

    // extracting last name
    for (int i = 6; i < 8; ++i)
    {
        lastName += fullName[i];
    }

    // STEP 3
    
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

    // STEP 4 
    string upperFull = firstName + " " + lastName; // concatenate all together

    cout << upperFull << endl; // output ir

    return 0;
}