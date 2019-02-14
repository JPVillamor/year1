//John Paul Villamor
//4A
//23 September 2016

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double Arith, Geo, Harm;
int Input1, Input2;

double amean (int a, int b)
{
	Arith = double(Input1 + Input2) / 2;
	return Arith;
}
double gmean (int a, int b)
{
	Geo = sqrt(double(Input1) * double(Input2));
	return Geo;
}
double hmean (int a, int b)
{
	Harm = 2 / (1/double(Input1) + 1/double(Input2));
	return Harm;
}

void output (double k, double l, double m)
{
	cout << "Arithmetic Mean: " << Arith << endl;
	cout << "Geometric Mean: " << Geo << endl;
	cout << "Harmonic Mean: " << Harm << endl;
}

int main ()
{
    cout.setf(ios :: showpoint | ios :: fixed);
    cout << setprecision (3);

	cout << "\"The Mean Machine\"" << endl;

	cout << "Please enter an integer: ";
	cin >> Input1;
	cout << endl << "Please enter an integer: ";
	cin >> Input2;

	cout << endl;

	amean (Input1, Input2);
    	gmean (Input1, Input2);
	hmean (Input1, Input2);

	output (Arith, Geo, Harm);

	return 0;
}
