//John Paul Villamor
//4A
//28 Nov 2016

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int i, a, b, v;

int Master[36];

void Shuffle (int Master[36])
{
	for (i = 0; i < 36; i++)
	{
		Master[i] = i + 1;
	}
	
	std::random_shuffle(Master, Master + 36);
}

void Dealer1 (int Deck1[5], int Deck2[5])
{
	for (a = 0; a < 5; a++)
	{
		Deck1[a] = Master[a];
		Deck2[a] = Master[a + 5];
	}
}

int main ()
{
	
	int Deck1[5];
	int Deck2[5];
	
	Shuffle(Master);
	Dealer1(Deck1, Deck2);
	
	srand (time(NULL));
	
	
	cout << "Your Deck: " << endl;
	for (v = 0; v < 5; v++)
	{
		cout << Deck1[v] % 9;
		if (Deck1[v] > 27)
		{
			cout << "S" << endl;
		}
		
		else if (Deck1[v] > 18)
		{
			cout << "H" << endl;
		}
		
		else if (Deck1[v] > 9)
		{
			cout << "D" << endl;
		}
		
		else if (Deck1[v] > 0)
		{
			cout << "C" << endl;
		}
	}
	return 0;
}
