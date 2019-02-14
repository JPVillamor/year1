#include <iostream>
using namespace std;
int main ()
{
	int Dealer[5], Suits[5], Maybe[5], Min, Lead1, b, c; char Lead2;
	for (int a = 0; a < 5; a++)//Big loop
	{
		cin >> Lead1;
		cin >> Lead2;
		for (b = 0; b < 5; b++)//Input loop
		{
			cin >> Dealer[b]; cin >> Suits[b];
			if (Suits[b] == Lead2 && Dealer[b] > Lead1)
			{
				for (c = 0; c <= b; c++)
				{
					Maybe[c] = Dealer[b];
				}
			}
		}
		Min = Maybe[0];
		for (int d = 0; d <= c; d++)
		{
			if (Maybe[d] < Min)
			{
				Min = Maybe[d];
			}
		}
		if (Min == 0)
		{
			cout << "NONE" << endl;
		}
		else if (Min )
	}
	return 0;
}
