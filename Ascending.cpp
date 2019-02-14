//John Paul Villamor; 4A; February 2017
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main ()
{
	int a, i, n, j, num[20]; string input[5];
	for (int c = 0; c < 5; c++)
	{
	    cout << "String: "; 
	    getline(cin, input[c]);
	    a = input[c].length(); i = 0; n = 1; j = 1; num[0] = 0;
	    while (i < a && i + j <= a)
	    {
	    	j = 1;
	        do
	        {
				string sub = input[c].substr(i, j);
	            num[n] = atoi(sub.c_str()); j++;
	        }
	        while (num[n] <= num[n - 1] && i + j <= a);
	        if (num[n] > num[n-1])
	        {
	            cout << num[n] << " "; n++;
	            i += j - 1;
	        }
	    }
	    cout << endl;
	}
    return 0;
}

