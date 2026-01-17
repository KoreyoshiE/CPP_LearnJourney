#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input;
    input.open("numbers.txt");
    int score, total = 0;
    while (input >> score) 
    {
        total += score;
    }
    cout << "Total score is " << total << endl;
    input.close();
    cout << "Done" << endl;
    return 0;
}