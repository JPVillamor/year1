//John Paul Villamor
//4A
//2 November 2016

#include <iostream>

using namespace std;

int main ()
{
    int a, d, e = 1;
    cout << "Height? ";
    cin >> a;
    cout << "Seed? ";
    cin >> d;

    for (int b = 1; b <= a; b++)
    {
        while (e <= a - b)
        {
            cout << " ";
            e++;
        }

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
            }

        }

        cout << endl;

        e = 1;
    }

    return 0;
}

