//JPV
//4A, Mr Roberts
//Initialized 7 October 2016

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

const int FACT = 1, SQRD = 2, CUBD = 3, SQRT = 4, CBRT = 5, PCNT = 6, AVER = 7, CIRCLE = 8, SPHERE = 9, PRISM = 10;
const double PI = 3.14159265;

int Input, Choice1, Result;
double Decimal, Circumference, Area, Volume, ResultD;
double Height, Width, Length;
long ResultL;
char Letter;

//Asks for the user's desired operation:
void Menu1 (int &b)
{		
    cout << "O: ";
    cin >> Choice1;
    
    if (Choice1 > 10 || Choice1 <= 0)
    {
        cout << "BRUH" << endl;
        Choice1;
    }
}

//Takes a basic INTEGER INPUT:
void FeedInt (int &a)
{
    cout << "Please enter an integer: ";
    cin >> Input;
}

//Takes a double precision input:
void FeedDouble (double &d)
{
	cin >> Decimal;
}

//Takes character input:
void FeedChar (char &a)
{
	cin >> Letter;
}

//Takes the FACTORIAL of the inputed integer:
int Factorial (int x)
{
    FeedInt(Input);

    double factorial = 1;

    for (int i = 0; i < Input; i++)
		{
           factorial = factorial * (i+1);
		}

	ResultD = factorial;

    return ResultD;
}

//SQUARES the inputed integer:
int Squared (int x)
{
    FeedInt(Input);
    Result = Input * Input;

    return Result;
}

//CUBES the inputed integer:
long Cubed (int x)
{
    FeedInt(Input);
    ResultL = long(Input) * long(Input) * long(Input);

    return ResultL;
}

//Takes the SQUARE ROOT of the integer:
double Sqrt (int x)
{
	FeedInt(Input);
	ResultD = sqrt(double (Input));
	
	return ResultD;
}

//Takes the CUBE ROOT of the integer:
double Cbrt (int x)
{
	FeedInt(Input);
	ResultD = cbrt(double (Input));
	
	return ResultD;
}

//Finds the PERCENT of the part relative to the whole:
double Percent (int x)
{
	int Whole;
	FeedInt(Input);
	cout << Input << " / ";
	cin >> Whole;
	ResultD = double(Input)/double(Whole);
	
	return ResultD;
}

//Finds the average of integers:
double Avg(int a)
{
	Secondary1:

	int Counter = 0, Sum = 0;
	Letter = 't';
		
	while (Letter == 't')
	{
		FeedInt(Input);
		Counter = Counter + 1;
		Sum = Sum + Input;
		cout << "Continue? ";
		FeedChar(Letter);
	}
	
	if (Letter != 't' && Letter != 'f')
	{
		cout << "\n[!] USER ERROR\n" << endl;
		goto Secondary1;
	}
	
	ResultD = double(Sum) / double(Counter);
	
	return ResultD;
}

//Uses the average function to display letter grades:
void LetterGrade (double Grade)
{
	if (ResultD >= 90)
	{
		cout << "A" << endl;
	}
	
	else if (ResultD >= 80)
	{
		cout << "B" << endl;
	}
	
	else if (ResultD >= 70)
	{
		cout << "C" << endl;
	}
	
	else if (ResultD >= 60)
	{
		cout << "D" << endl;
	}
	
	else if (ResultD < 60)
	{
		cout << "F" << endl;
	}
	
	else 
	{
		cout << "[!] USER ERROR" << endl;
	}
}

//Area of a circle:
double CircleA (double x)
{
	Area = PI * Decimal * Decimal;
	
	return Area;
}

//Circumference of a circle:
double CircleC (double x)
{
	Circumference = 2 * PI * Decimal;
	
	return Circumference;
}

//Volume of a sphere:
double SphereV (double x)
{
	FeedDouble(Decimal);
	Volume = (4 * PI * Decimal * Decimal * Decimal) / 3;
	
	return Volume;
}

//Volume of 3D Prism:
double RectPrism (double x, double y, double z)
{
	Volume = Height * Width * Length;
	
	return Volume;
}

//This is the spinal cord of the program.
//Here the function is called according the user's choice:
void Runner (int c)
{
    if (Choice1 == FACT)
    {
        Factorial(Input);
    }

    else if (Choice1 == SQRD)
    {
        Squared(Input);
    }

    else if (Choice1 == CUBD)
    {
        Cubed(Input);
    }
    
    else if (Choice1 == SQRT)
    {
    	Sqrt(Input);
	}
	
	else if (Choice1 == CBRT)
	{
		Cbrt(Input);
	}
	
	else if (Choice1 == PCNT)
	{
		Percent(Input);
	}
	
	else if (Choice1 == AVER)
	{
		Avg(Input);
	}
	
	else if (Choice1 == CIRCLE)
	{
		cout << "Enter radius: ";
		FeedDouble(Decimal);
		CircleA(Decimal);
		CircleC(Decimal);
	}
	
	else if (Choice1 == SPHERE)
	{
		cout << "Enter radius: ";
		SphereV(Decimal);
	}
	
	else if (Choice1 == PRISM)
	{	
		cout << "Height: ";
		cin >> Height;
		cout << endl << "Width: ";
		cin >> Width;
		cout << endl << "Length: ";
		cin >> Length;
		cout << endl;
		
		RectPrism(Height, Width, Length);
	}

}

//This is the simple OUTPUT function.
//The output depends on the user's initial choice of operation.
void Speak ()
{
	cout.setf(ios::fixed);
	
    if (Choice1 == FACT)
    {
    	cout << setprecision (0) << ResultD << endl;
    }

    else if (Choice1 == SQRD)
    {
        cout << Result << endl;
    }

    else if (Choice1 == CUBD)
    {
        cout << ResultL << endl;
    }
    
    else if (Choice1 == SQRT)
    {
    	cout << setprecision (3) << ResultD << endl;
	}
	
	else if (Choice1 == CBRT)
	{
		cout << setprecision (3) << ResultD << endl;
	}
	
	else if (Choice1 == PCNT)
	{
		cout << setprecision (2) << ResultD * 100 << "%" << endl;
	}
	
	else if (Choice1 == AVER)
	{
		cout << setprecision (3) << ResultD << endl;
		
		Secondary2:
			
		cout << "Would you wish to know the letter grade for this average? ";
		cin >> Letter;
		
		if (Letter == 't')
		{
			LetterGrade(ResultD);
		}
		
		else if (Letter == 'f')
		{
			cout << "OK." << endl;
		}
		
		else 
		{
			cout << "[!] USER ERROR" << endl;
			goto Secondary2;
		}
	}
	
	else if (Choice1 == CIRCLE)
	{
		cout << setprecision (3);
		cout << setw(15) << "Area: " << Area << endl;
		cout << setw(15) << "Circumference: " << Circumference << endl;
	}
	
	else if (Choice1 == SPHERE)
	{
		cout << "Volume: " << setprecision (3) << Volume << endl;
	}
	
	else if (Choice1 == PRISM)
	{
		cout << "Volume: " << setprecision (3) << Volume << endl;
	}
}

int main ()
{
    cout << "\n\"PROJECT MELON\"\n" << endl;

	Primary:

    Menu1(Choice1);
    Runner(Choice1);
    Speak();
    goto Primary;

    return 0;
}

