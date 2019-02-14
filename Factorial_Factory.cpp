//John Paul Villamor
//4A
//3 October 2016

#include <iostream>

using namespace std;

int main ()
{
	int input; 
	int factorial = 1;
	
	cout << "\"The Factorial Factory\"\n" << endl;
	cout << "Please enter an integer: ";
	cin >> input;
	cout << endl;
	
	if (input == 0)
	{
		cout << input << "! is 1" << endl;
	}
	
	else if (input < 0)
	{
		cout << "Nope." << endl;
	}
		
	else 
	{
		for (int i = 0; i < input; i++)
		{
		factorial = factorial * (i+1);
		}
	
	cout << input << "! is " << factorial << endl;
	
	}
	
	
	return 0;
}
