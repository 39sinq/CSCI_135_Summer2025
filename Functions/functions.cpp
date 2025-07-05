/*
Name: Kathy Do
Professor: Taha Malik
Course: CSCI 135
Assignment: Project 3

five different functions
*/

#include <iostream> // for cin & cout 
#include <string> // for string usage
#include <iomanip> // for setprecision
using namespace std;

// checking if number is palindrome
// average of numbers in array

void reverse() 
{
    string input, reversed;
    cout << "Enter a string to reverse: ";
    getline(cin, input);

    for(int i = input.length() - 1; i >= 0; i--)
    {
        reversed += input[i];
    }

    cout << "Reversed: " << reversed;
    
    cout << endl;

} 

void count()
{
    string sentence;
    int count = 0;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for(int i = 0; i < sentence.size(); i++)
    {
        if(sentence[i] == ' ')
        {
            count++;
        }
    }

    count += 1;

    cout << "Word count: " << count;

    cout << endl;

} 

void palindrome()
{
    int original, num, digit;
    int rev = 0;
    cout << "Enter a number: ";
    cin >> original;

    num = original;
    
    while(num != 0)    
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    cout << "Palindrome? ";

    if(rev == original)
    {
        cout << "Yes";
    } else 
    {
        cout << "No";
    }

    cout << endl;
    
}

void average()
{

    // asking for size of array first
    int size;
    cout << "Enter size: ";
    cin >> size;

    // then asking for numbers
    int* arr = new int[size];
    int sum = 0;
    double average;

    cout << "Enter " << size << " numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / size;

    cout << fixed << setprecision(1); // showing one digit after decimal
    cout << "Average: " << average << endl;
}


void convert()
{
    double celsius;
    double farenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    farenheit = celsius * 9.0 / 5 + 32;
    cout << "Farenheit: " << farenheit;

    cout << endl;

}

int main()
{
    reverse();
    count();
    palindrome();
    average();
    convert();
}


