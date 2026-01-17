#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
    string lottery;
    srand(time(0));
    int digit1 = rand() % 10;
    int digit2 = rand() % 10;
    lottery += static_cast<char>(digit1 + '0');
    lottery += static_cast<char>(digit2 + '0');

    cout << "Enter your lottery pick (two digits): ";
    string guess;
    cin >> guess;

    cout << "The lottery number is " << lottery << endl;

    if (guess.length() != 2) 
    {
        cout << "Invalid input! Please enter exactly two digits." << endl;
        return 1;
    }

    if (guess == lottery) 
    {
        cout << "Exact match: you win $10,000" << endl;
    } 
    else if (guess[0] == lottery[1] && guess[1] == lottery[0]) 
    {
        cout << "Match all digits: you win $3,000" << endl;
    } 
    else if (guess[0] == lottery[0] || guess[0] == lottery[1]
            || guess[1] == lottery[0] || guess[1] == lottery[1]) 
    {
        cout << "Match one digit: you win $1,000" << endl;
    } 
    else 
    {
        cout << "Sorry, no match" << endl;
    }

    return 0;
}