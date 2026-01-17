#include <iostream>
#include <cctype>
using namespace std;

int main() 
{
    cout << "Enter a hex digit: ";
    char hexDigit;
    cin >> hexDigit;
    hexDigit = toupper(hexDigit);

    if (hexDigit >= 'A' && hexDigit <= 'F') 
    {
        int value = 10 + hexDigit - 'A';
        cout << "The decimal value for hex digit " << hexDigit << " is " << value << endl;
    } 
    else if (isdigit(hexDigit)) 
    {
        int value = hexDigit - '0';
        cout << "The decimal value for hex digit " << hexDigit << " is " << value << endl;
    } 
    else 
    {
        cout << hexDigit << " is an invalid input" << endl;
    }

    return 0;
}