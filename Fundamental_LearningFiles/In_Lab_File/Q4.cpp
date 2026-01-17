#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream output;
    output.open("numbers.txt");
    output << 95 << endl;
    output << 56 << endl;
    output << 34 << endl;
    output.close();
    cout << "Done" << endl;
    return 0;
}