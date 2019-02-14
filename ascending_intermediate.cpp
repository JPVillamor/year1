//John Paul Villamor; 4A; February 2017
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main ()
{
	int b, i, n, j, k, num[20]; string input; string output;
	for (int c = 0; c < 5; c++)
	{
	    cout << "String: "; 
	    getline(cin, input);
	    i = 0; n = 1; j = input[0];
	    string sub1 = input.substr(1, j);
	    num[0] = atoi(sub1.c_str());
	    cout << num[0] << " ";
	    input.erase(0, j + 1);
	    output = input;
	    b = output.length();
	    for (int t = 0; t < b; t++)
	    {
	        output[t] = input[b - t - 1];
	    }
	    while (i < b && i + k <= b)
	    {
	    	k = 1;
	        do
	        {
				string sub = output.substr(i, k);
	            num[n] = atoi(sub.c_str()); k++;
	        }
	        while (num[n] <= num[n - 1] && i + k <= b);
	        if (num[n] > num[n-1])
	        {
	            cout << num[n] << " "; n++;
	            i += k - 1;
	        }
	    }
	    cout << endl;
	}
    return 0;
}

