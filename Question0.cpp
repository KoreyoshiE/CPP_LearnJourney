#include <iostream> 
using namespace std;

int main()
{
	double a; 
	double v1, v0, t;

	cout << "Enter v1, v0, t: ";
	cin >> v1 >> v0 >> t;

	if(t<=0){
		cout << "Input error. Time cannot be less than 0." << endl;
	}
	else{
		a = (v1 - v0) / t; 
		cout << "The average acceleration is " << a << endl;
	}
	
	return 0;
}
