//John Paul Villamor
//4A
//2 November 2016

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	char cane = 244;
	char slash = 92;
    int a, d, e = 1;
    cout << "Height? ";
    cin >> a;
    cout << "Seed? ";
    cin >> d;
    
    for (int j = 1; j < 2 * a + 2; j++)
    {
    	cout << " ";
	}
	
	cout << "*" << endl;

    for (int b = 1; b <= a; b++)
    {
        while (e <= 2 * (a - b))
        {
            cout << " ";
            e++;
        }
        
        cout << " / ";

        if (d <= 9)
        {
        	
            for (int c = 1; c <= b; c++)
            {
                cout << d << " ";
                d++;

                if (d + 1 > 10)
                {
                    d = 0;
                }
				
				if (c != b)
				{
					cout << cane << " ";
				}
				
				else if (c == b)
				{
					cout << slash;
				}                
            }

        }
    
        cout << endl;
        cout << endl;

        e = 1;
    }

    return 0;
}

