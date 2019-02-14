//John Paul Villamor
//4A
//27 September 2016

#include <iostream>
#include <iomanip>

using namespace std;

int Input1, Input2, Input3, Input4, Input5;
double Avg;

void input (int &a, int &b, int &c, int &d, int &e)
{
	cout << "Please enter your five numerical grades: " << endl;

	cin >> Input1;
	cout << endl;

	cin >> Input2;
	cout << endl;

	cin >> Input3;
	cout << endl;

	cin >> Input4;
	cout << endl;

	cin >> Input5;
	cout << endl;
}

double math (int a, int b, int c, int d, int e)
{
	Avg = double (Input1 + Input2 + Input3 + Input4 + Input5) / 5;
	return Avg;
}

void output (double average)
{
    cout.setf(ios::showpoint | ios::fixed);
    cout << setprecision(1);
	cout << "The average of your grades is " << Avg << endl;

	if (Avg <= 100 && Avg >= 90)
    {
        cout << "That's an A!" << endl;
    }

    else if (Avg <= 89 && Avg >= 80)
    {
        cout << "That's a B!" << endl;
    }

    else if (Avg <= 79 && Avg >= 70)
    {
        cout << "That's a C!" << endl;
    }

    else if (Avg <= 69 && Avg >= 60)
    {
        cout << "That's a D!" << endl;
    }

    else if (Avg <= 59 && Avg >= 0)
    {
        cout << "That's an F!" << endl;
    }
    else if (Avg > 100)
    {
        cout << "That's an A! I guess..." << endl;
    }
    else
    {
        cout << "You did something wrong!" << endl;
    }
}

int main ()
{
    cout << "\"The Grade Grubber\"\n" << endl;

	input (Input1, Input2, Input3, Input4, Input5);
	math (Input1, Input2, Input3, Input4, Input5);
	output (Avg);

	return 0;
}
