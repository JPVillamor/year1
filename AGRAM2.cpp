//John Paul Villamor
//4A
//28 Nov 2016

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 36;

int in1, card, add;
char in2;
int w = 0;

void shuffle (int Cards[36])
{
	for (int i = 0; i < SIZE; i++)
	{
		int index = rand() % SIZE;
		int temp = Cards[i];
		Cards[i] = Cards[index];
		Cards[index] = temp;
	}
}

void inputnum (int &in1)
{
	cout << "Enter number from your deck: " << endl;
	cin >> in1;
}

void inputsuit (char &in2)
{
	cout << "Enter suit letter: " << endl;
	cin >> in2;
}

int play(int a, char b)
{	
	if (in2 == 'c')
	{
		add = 0;
	}
	
	else if (in2 == 'd')
	{
		add = 9;
	}
	
	else if (in2 == 'h')
	{
		add = 18;
	}
	
	else if (in2 == 's')
	{
		add = 27;
	}
	
	card = in1 + add;
	
	return card;
}

int main ()
{
	int Cards[SIZE];
	int Deck1[5];
	int Deck2[5];
	srand (time(0));
	
	for (int a = 0; a < SIZE; a++)
	{
		Cards[a] = a + 1;
	}

	shuffle(Cards);

	for (int y = 0; y < 5; y++)
	{
		Deck1[y] = Cards[y];
		Deck2[y] = Cards[y + 5];
	}
	
	cout << "You: " << endl << endl;
	for (int x = 0; x < 5; x++)
	{
		cout << Deck1[x];
		cout << " = "; 
		
		if (Deck1[x] % 9 == 0)
		{
			cout << "9";
		}
		
		else
		cout << Deck1[x] % 9;
		if (Deck1[x] >= 28)
		{
			cout << "S" << endl;
		}
		
		else if (Deck1[x] >= 19)
		{
			cout << "H" << endl;
		}
		
		else if (Deck1[x] >= 10)
		{
			cout << "D" << endl;
		}
		
		else if (Deck1[x] >= 1)
		{
			cout << "C" << endl;
		}	
	}
	
	inputnum(in1);
	inputsuit(in2);
	play(in1, in2);
	
	while (w < 5)
	{
		if (Deck2[w] > add && Deck2[w] < add + 9)
		{
			cout << Deck2[w] << endl;
		}
		
		else if (Deck2[w] > add + 9)
		{
			for (int v = 1; v < 9; v++)
			{
				if (Deck2[w] == add + 9 + v)
				{
					cout << Deck2[w] << endl;
				}
			}
		}
		w++;
	}
	
	return 0;
}
