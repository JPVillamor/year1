//John Paul Villamor
//George
//4A
//September 7th, 2016

#include <iostream>
const int END = 30;

using namespace std;

int main ()
{
	int age;
	cout << "Hello World!\nPlease enter your age: \n";
	cin >> age;

	age = END - age;
	
	cout << "You will be " << END << " in " << age << " years.";

	return 0;
}
